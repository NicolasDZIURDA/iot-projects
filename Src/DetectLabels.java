package com.javacodegeeks.aws;

/**
 * Hello world!
 *
 */
public class DetectLabels {
 
    public void run(String[] args) {
 
        if (args.length < 2) {
            System.err.println("Please provide an image.");
            return;
        }
 
        String imgPath = args[1];
        byte[] bytes;
        try {
            bytes = Files.readAllBytes(Paths.get(imgPath));
        } catch (IOException e) {
            System.err.println("Failed to load image: " + e.getMessage());
            return;
        }
        ByteBuffer byteBuffer = ByteBuffer.wrap(bytes);
 
        AmazonRekognition rekognition = ClientFactory.createClient();
 
        DetectLabelsRequest request = new DetectLabelsRequest()
            .withImage(new Image().withBytes(byteBuffer))
            .withMaxLabels(10);
        DetectLabelsResult result = rekognition.detectLabels(request);
 
        List<label> labels = result.getLabels();
        for (Label label : labels) {
            System.out.println(label.getName() + ": " + label.getConfidence());
        }
    }
 
}