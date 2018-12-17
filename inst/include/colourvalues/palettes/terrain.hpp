#ifndef R_COLOURVALUES_TERRAIN_H
#define R_COLOURVALUES_TERRAIN_H

#include <Rcpp.h>
using namespace Rcpp;

namespace colourvalues {
namespace palette {

  const Rcpp::NumericVector terrain_red = {
    0, 0.00392156862745098, 0.0117647058823529, 0.0156862745098039,
    0.0196078431372549, 0.0274509803921569, 0.0313725490196078, 0.0352941176470588,
    0.0431372549019608, 0.0470588235294118, 0.0509803921568627, 0.0588235294117647,
    0.0627450980392157, 0.0705882352941176, 0.0745098039215686, 0.0784313725490196,
    0.0862745098039216, 0.0901960784313725, 0.0980392156862745, 0.101960784313725,
    0.109803921568627, 0.113725490196078, 0.12156862745098, 0.125490196078431,
    0.133333333333333, 0.137254901960784, 0.145098039215686, 0.149019607843137,
    0.156862745098039, 0.16078431372549, 0.168627450980392, 0.172549019607843,
    0.180392156862745, 0.184313725490196, 0.192156862745098, 0.2,
    0.203921568627451, 0.211764705882353, 0.215686274509804, 0.223529411764706,
    0.231372549019608, 0.235294117647059, 0.243137254901961, 0.247058823529412,
    0.254901960784314, 0.262745098039216, 0.266666666666667, 0.274509803921569,
    0.282352941176471, 0.286274509803922, 0.294117647058824, 0.301960784313725,
    0.309803921568627, 0.313725490196078, 0.32156862745098, 0.329411764705882,
    0.333333333333333, 0.341176470588235, 0.349019607843137, 0.356862745098039,
    0.364705882352941, 0.368627450980392, 0.376470588235294, 0.384313725490196,
    0.392156862745098, 0.4, 0.403921568627451, 0.411764705882353,
    0.419607843137255, 0.427450980392157, 0.435294117647059, 0.443137254901961,
    0.447058823529412, 0.454901960784314, 0.462745098039216, 0.470588235294118,
    0.47843137254902, 0.486274509803922, 0.494117647058824, 0.501960784313725,
    0.509803921568627, 0.517647058823529, 0.525490196078431, 0.533333333333333,
    0.541176470588235, 0.545098039215686, 0.552941176470588, 0.56078431372549,
    0.568627450980392, 0.576470588235294, 0.584313725490196, 0.592156862745098,
    0.603921568627451, 0.611764705882353, 0.619607843137255, 0.627450980392157,
    0.635294117647059, 0.643137254901961, 0.650980392156863, 0.658823529411765,
    0.666666666666667, 0.674509803921569, 0.682352941176471, 0.690196078431373,
    0.698039215686274, 0.709803921568627, 0.717647058823529, 0.725490196078431,
    0.733333333333333, 0.741176470588235, 0.749019607843137, 0.76078431372549,
    0.768627450980392, 0.776470588235294, 0.784313725490196, 0.792156862745098,
    0.803921568627451, 0.811764705882353, 0.819607843137255, 0.827450980392157,
    0.83921568627451, 0.847058823529412, 0.854901960784314, 0.862745098039216,
    0.874509803921569, 0.882352941176471, 0.890196078431372, 0.901960784313726,
    0.901960784313726, 0.901960784313726, 0.901960784313726, 0.901960784313726,
    0.901960784313726, 0.901960784313726, 0.901960784313726, 0.901960784313726,
    0.901960784313726, 0.901960784313726, 0.905882352941176, 0.905882352941176,
    0.905882352941176, 0.905882352941176, 0.905882352941176, 0.905882352941176,
    0.905882352941176, 0.905882352941176, 0.905882352941176, 0.905882352941176,
    0.909803921568627, 0.909803921568627, 0.909803921568627, 0.909803921568627,
    0.909803921568627, 0.909803921568627, 0.909803921568627, 0.909803921568627,
    0.909803921568627, 0.909803921568627, 0.913725490196078, 0.913725490196078,
    0.913725490196078, 0.913725490196078, 0.913725490196078, 0.913725490196078,
    0.913725490196078, 0.913725490196078, 0.913725490196078, 0.913725490196078,
    0.917647058823529, 0.917647058823529, 0.917647058823529, 0.917647058823529,
    0.917647058823529, 0.917647058823529, 0.917647058823529, 0.917647058823529,
    0.917647058823529, 0.917647058823529, 0.92156862745098, 0.92156862745098,
    0.92156862745098, 0.92156862745098, 0.92156862745098, 0.92156862745098,
    0.92156862745098, 0.92156862745098, 0.92156862745098, 0.92156862745098,
    0.925490196078431, 0.925490196078431, 0.925490196078431, 0.925490196078431,
    0.925490196078431, 0.925490196078431, 0.925490196078431, 0.925490196078431,
    0.925490196078431, 0.925490196078431, 0.929411764705882, 0.929411764705882,
    0.929411764705882, 0.929411764705882, 0.929411764705882, 0.929411764705882,
    0.929411764705882, 0.929411764705882, 0.929411764705882, 0.929411764705882,
    0.933333333333333, 0.933333333333333, 0.933333333333333, 0.933333333333333,
    0.933333333333333, 0.933333333333333, 0.933333333333333, 0.933333333333333,
    0.933333333333333, 0.933333333333333, 0.937254901960784, 0.937254901960784,
    0.937254901960784, 0.937254901960784, 0.937254901960784, 0.937254901960784,
    0.937254901960784, 0.937254901960784, 0.937254901960784, 0.937254901960784,
    0.941176470588235, 0.941176470588235, 0.941176470588235, 0.941176470588235,
    0.941176470588235, 0.941176470588235, 0.941176470588235, 0.941176470588235,
    0.941176470588235, 0.941176470588235, 0.945098039215686, 0.945098039215686,
    0.945098039215686, 0.945098039215686, 0.945098039215686, 0.945098039215686,
    0.945098039215686, 0.945098039215686, 0.945098039215686, 0.945098039215686,
    0.949019607843137, 0.949019607843137, 0.949019607843137, 0.949019607843137,
    0.949019607843137, 0.949019607843137, 0.949019607843137, 0.949019607843137
  };

  const Rcpp::NumericVector terrain_green = {
    0.650980392156863, 0.650980392156863, 0.654901960784314, 0.654901960784314,
    0.658823529411765, 0.658823529411765, 0.662745098039216, 0.662745098039216,
    0.666666666666667, 0.666666666666667, 0.670588235294118, 0.670588235294118,
    0.674509803921569, 0.674509803921569, 0.67843137254902, 0.67843137254902,
    0.682352941176471, 0.682352941176471, 0.686274509803922, 0.686274509803922,
    0.690196078431373, 0.690196078431373, 0.694117647058824, 0.694117647058824,
    0.698039215686274, 0.698039215686274, 0.701960784313725, 0.701960784313725,
    0.705882352941177, 0.705882352941177, 0.709803921568627, 0.709803921568627,
    0.713725490196078, 0.713725490196078, 0.717647058823529, 0.717647058823529,
    0.72156862745098, 0.72156862745098, 0.725490196078431, 0.725490196078431,
    0.729411764705882, 0.729411764705882, 0.733333333333333, 0.733333333333333,
    0.737254901960784, 0.737254901960784, 0.741176470588235, 0.741176470588235,
    0.745098039215686, 0.745098039215686, 0.749019607843137, 0.749019607843137,
    0.752941176470588, 0.752941176470588, 0.756862745098039, 0.756862745098039,
    0.76078431372549, 0.76078431372549, 0.764705882352941, 0.764705882352941,
    0.768627450980392, 0.768627450980392, 0.772549019607843, 0.772549019607843,
    0.776470588235294, 0.776470588235294, 0.780392156862745, 0.780392156862745,
    0.784313725490196, 0.784313725490196, 0.788235294117647, 0.788235294117647,
    0.792156862745098, 0.792156862745098, 0.796078431372549, 0.796078431372549,
    0.8, 0.8, 0.803921568627451, 0.803921568627451, 0.807843137254902,
    0.807843137254902, 0.811764705882353, 0.811764705882353, 0.815686274509804,
    0.815686274509804, 0.819607843137255, 0.819607843137255, 0.823529411764706,
    0.823529411764706, 0.827450980392157, 0.827450980392157, 0.831372549019608,
    0.831372549019608, 0.835294117647059, 0.835294117647059, 0.83921568627451,
    0.83921568627451, 0.843137254901961, 0.843137254901961, 0.847058823529412,
    0.847058823529412, 0.850980392156863, 0.850980392156863, 0.854901960784314,
    0.854901960784314, 0.858823529411765, 0.858823529411765, 0.862745098039216,
    0.862745098039216, 0.866666666666667, 0.866666666666667, 0.870588235294118,
    0.870588235294118, 0.874509803921569, 0.874509803921569, 0.87843137254902,
    0.87843137254902, 0.882352941176471, 0.882352941176471, 0.886274509803922,
    0.886274509803922, 0.890196078431372, 0.890196078431372, 0.894117647058824,
    0.894117647058824, 0.898039215686275, 0.901960784313726, 0.894117647058824,
    0.886274509803922, 0.882352941176471, 0.874509803921569, 0.866666666666667,
    0.862745098039216, 0.854901960784314, 0.850980392156863, 0.843137254901961,
    0.83921568627451, 0.831372549019608, 0.827450980392157, 0.823529411764706,
    0.815686274509804, 0.811764705882353, 0.807843137254902, 0.803921568627451,
    0.796078431372549, 0.792156862745098, 0.788235294117647, 0.784313725490196,
    0.780392156862745, 0.776470588235294, 0.772549019607843, 0.768627450980392,
    0.764705882352941, 0.76078431372549, 0.756862745098039, 0.752941176470588,
    0.749019607843137, 0.745098039215686, 0.741176470588235, 0.737254901960784,
    0.733333333333333, 0.733333333333333, 0.729411764705882, 0.725490196078431,
    0.725490196078431, 0.72156862745098, 0.717647058823529, 0.717647058823529,
    0.713725490196078, 0.713725490196078, 0.709803921568627, 0.709803921568627,
    0.705882352941177, 0.705882352941177, 0.701960784313725, 0.701960784313725,
    0.701960784313725, 0.698039215686274, 0.698039215686274, 0.698039215686274,
    0.698039215686274, 0.694117647058824, 0.694117647058824, 0.694117647058824,
    0.694117647058824, 0.694117647058824, 0.694117647058824, 0.694117647058824,
    0.694117647058824, 0.694117647058824, 0.694117647058824, 0.694117647058824,
    0.694117647058824, 0.694117647058824, 0.694117647058824, 0.698039215686274,
    0.698039215686274, 0.698039215686274, 0.698039215686274, 0.701960784313725,
    0.701960784313725, 0.701960784313725, 0.705882352941177, 0.705882352941177,
    0.709803921568627, 0.709803921568627, 0.713725490196078, 0.713725490196078,
    0.717647058823529, 0.72156862745098, 0.72156862745098, 0.725490196078431,
    0.729411764705882, 0.729411764705882, 0.733333333333333, 0.737254901960784,
    0.741176470588235, 0.745098039215686, 0.745098039215686, 0.749019607843137,
    0.752941176470588, 0.756862745098039, 0.76078431372549, 0.764705882352941,
    0.768627450980392, 0.772549019607843, 0.780392156862745, 0.784313725490196,
    0.788235294117647, 0.792156862745098, 0.796078431372549, 0.803921568627451,
    0.807843137254902, 0.811764705882353, 0.819607843137255, 0.823529411764706,
    0.827450980392157, 0.835294117647059, 0.83921568627451, 0.847058823529412,
    0.850980392156863, 0.858823529411765, 0.866666666666667, 0.870588235294118,
    0.87843137254902, 0.886274509803922, 0.890196078431372, 0.898039215686275,
    0.905882352941176, 0.913725490196078, 0.92156862745098, 0.925490196078431,
    0.933333333333333, 0.941176470588235, 0.949019607843137
  };

  const Rcpp::NumericVector terrain_blue = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0.00784313725490196, 0.0156862745098039, 0.0196078431372549,
    0.0274509803921569, 0.0352941176470588, 0.0431372549019608, 0.0509803921568627,
    0.0549019607843137, 0.0627450980392157, 0.0705882352941176, 0.0784313725490196,
    0.0862745098039216, 0.0901960784313725, 0.0980392156862745, 0.105882352941176,
    0.113725490196078, 0.12156862745098, 0.129411764705882, 0.133333333333333,
    0.141176470588235, 0.149019607843137, 0.156862745098039, 0.164705882352941,
    0.168627450980392, 0.176470588235294, 0.184313725490196, 0.192156862745098,
    0.2, 0.207843137254902, 0.211764705882353, 0.219607843137255,
    0.227450980392157, 0.235294117647059, 0.243137254901961, 0.250980392156863,
    0.258823529411765, 0.262745098039216, 0.270588235294118, 0.27843137254902,
    0.286274509803922, 0.294117647058824, 0.301960784313725, 0.309803921568627,
    0.313725490196078, 0.32156862745098, 0.329411764705882, 0.337254901960784,
    0.345098039215686, 0.352941176470588, 0.36078431372549, 0.364705882352941,
    0.372549019607843, 0.380392156862745, 0.388235294117647, 0.396078431372549,
    0.403921568627451, 0.411764705882353, 0.419607843137255, 0.423529411764706,
    0.431372549019608, 0.43921568627451, 0.447058823529412, 0.454901960784314,
    0.462745098039216, 0.470588235294118, 0.47843137254902, 0.486274509803922,
    0.494117647058824, 0.498039215686275, 0.505882352941176, 0.513725490196078,
    0.52156862745098, 0.529411764705882, 0.537254901960784, 0.545098039215686,
    0.552941176470588, 0.56078431372549, 0.568627450980392, 0.576470588235294,
    0.580392156862745, 0.588235294117647, 0.596078431372549, 0.603921568627451,
    0.611764705882353, 0.619607843137255, 0.627450980392157, 0.635294117647059,
    0.643137254901961, 0.650980392156863, 0.658823529411765, 0.666666666666667,
    0.674509803921569, 0.67843137254902, 0.686274509803922, 0.694117647058824,
    0.701960784313725, 0.709803921568627, 0.717647058823529, 0.725490196078431,
    0.733333333333333, 0.741176470588235, 0.749019607843137, 0.756862745098039,
    0.764705882352941, 0.772549019607843, 0.780392156862745, 0.788235294117647,
    0.796078431372549, 0.803921568627451, 0.811764705882353, 0.819607843137255,
    0.827450980392157, 0.835294117647059, 0.843137254901961, 0.847058823529412,
    0.854901960784314, 0.862745098039216, 0.870588235294118, 0.87843137254902,
    0.886274509803922, 0.894117647058824, 0.901960784313726, 0.909803921568627,
    0.917647058823529, 0.925490196078431, 0.933333333333333, 0.941176470588235,
    0.949019607843137
  };

  const Rcpp::List terrain = Rcpp::List::create(
    _["r"] = terrain_red,
    _["g"] = terrain_green,
    _["b"] = terrain_blue
  );

} // namespace palette
} // namepsace colourvalues

#endif

