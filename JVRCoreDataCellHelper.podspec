Pod::Spec.new do |s|
  s.name         = "JVRCoreDataCellHelper"
  s.version      = "1.0.0"
  s.summary      = "Helper delegate protocol for the configuration of UICollectionViewCell and UITableViewCell objects and to handle item deletion"
  s.homepage     = "https://github.com/jozsef-vesza/JVRCoreDataCellHelper"
  s.license      = "MIT"
  s.author             = { "József Vesza" => "jozsef.vesza@outlook.com" }
  s.social_media_url   = "http://twitter.com/j_vesza"
  s.platform     = :ios, "5.0"
  s.source       = { :git => "https://github.com/jozsef-vesza/JVRCoreDataCellHelper.git", :tag => s.version }
  s.source_files  = "*.h"
  s.public_header_files = "*.h"
  s.requires_arc = true
end
