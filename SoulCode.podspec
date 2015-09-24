Pod::Spec.new do |s|
  s.name         = "SoulCode"
  s.version      = "1.0"
  s.summary      = "SoulCode"

  s.description  = <<-DESC
                   A longer description of SoulCode in Markdown format.

                   * Think: Why did you write this? What is the focus? What does it do?
                   * CocoaPods will be using this to generate tags, and improve search results.
                   * Try to keep it short, snappy and to the point.
                   * Finally, don't worry about the indent, CocoaPods strips it!
                   DESC

  s.homepage     = "https://github.com/b956536180/SoulCode"
  # s.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"

  s.license      = "MIT (example)"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }

  s.author             = { "Xiao" => "email@address.com" }
  # s.authors            = { "Xiao" => "email@address.com" }
  # s.social_media_url   = "http://twitter.com/Xiao"

  # s.platform     = :ios
  # s.platform     = :ios, "5.0"

  #  When using multiple platforms
  # s.ios.deployment_target = "5.0"
  # s.osx.deployment_target = "10.7"
  s.source       = { :git => "https://github.com/b956536180/SoulCode.git", :tag => "1.0" }
	
  s.source_files      = 'SoulCode.framework/Versions/A/Headers/*.{h}'
  s.exclude_files = "Classes/Exclude"

  # s.public_header_files = "Classes/**/*.h"

  # s.resource  = "icon.png"
  s.resources         = 'SoulCode.bundle'
  s.preserve_paths    = 'SoulCode.framework/*', 'SoulCode.bundle'
  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"

  # s.framework  = "SomeFramework"
  # s.frameworks = "SomeFramework", "AnotherFramework"
  s.frameworks        = 'UIKit','QuartzCore', 'Foundation', 'CoreFoundation', 'CoreGraphics','SoulCode'
  # s.library   = "iconv"
  # s.libraries = "iconv", "xml2"



  # s.requires_arc = true
  s.xcconfig          =  { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/SoulCode/"','OTHER_LDFLAGS' => '-lObjC','OTHER_LDFLAGS' => '-all_load'}	
  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"
  s.requires_arc      = true
end
