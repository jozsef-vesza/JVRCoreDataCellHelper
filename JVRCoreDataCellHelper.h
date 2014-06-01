//
//  JVRCoreDataCellHelper.h
//  JVRCoreDataCollectionViewDataSource
//
//  Created by Jozsef Vesza on 29/05/14.
//
//

#import <Foundation/Foundation.h>

/**
 *  Helper delegate protocol implemented by the class responsible for the configuration of UICollectionViewCell and UITableViewCell objects and the handling of item deletion
 */
@protocol JVRCoreDataCellHelper <NSObject>

/**
 *  Fetch the reuse identifier for a UITableViewCell or UICollectionViewCell with regards to the object it shows.
 *
 *  @param object The object shown in the cell
 *
 *  @return An NSString instance containing the identifier
 */
- (NSString *)fetchReuseIdentifierForObject:(id)object;

/**
 *  Customize a given UITableViewCell or UICollectionViewCell object using properties of an object.
 *
 *  @param cell   The cell to be configured
 *  @param object The object shown in the cell
 *
 *  @return The instance of the configured cell
 */
- (id)configureCell:(id)cell withObject:(id)object;

/**
 *  Handle deletion of an object shown in the table view or collection view
 *
 *  @param object The object to be deleted
 */
- (void)deleteObject:(id)object;

@end
