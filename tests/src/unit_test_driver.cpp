#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "MeshTest.h"
#include "IO/OBJParserTest.h"
#include "IO/OBJWriterTest.h"
#include "IO/MSHParserTest.h"
#include "Misc/TripletTest.h"
#include "Misc/MultipletTest.h"
#include "Misc/HashGridTest.h"
#include "Attributes/FaceCentroidAttributeTest.h"
#include "Attributes/FaceCircumCenterAttributeTest.h"
#include "Attributes/FaceVoronoiAreaAttributeTest.h"
#include "Attributes/VoxelVolumeAttributeTest.h"
#include "Attributes/VoxelCentroidAttributeTest.h"
#include "Attributes/VertexGaussianCurvatureAttributeTest.h"
#include "Attributes/VertexNormalAttributeTest.h"
#include "Attributes/VertexMeanCurvatureAttributeTest.h"
#include "Attributes/VertexLaplacianAttributeTest.h"

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
