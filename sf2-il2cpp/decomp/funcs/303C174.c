// CloseButton$$remove_ClickAction @ RVA 0x303C174

void CloseButton__remove_ClickAction
               (CloseButton_o *__this,System_Action_object__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_object__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_object__o *pSVar5;
  System_Action_object__o *source;
  
                    /* try { // try from 0313c180 to 0323c183 has its CatchHandler @ 0313c27c */
                    /* try { // try from 0313c188 to 0323c18b has its CatchHandler @ 0313c304 */
  if ((DAT_04565d8c & 1) == 0) {
                    /* try { // try from 0313c1a0 to 0323c1b7 has its CatchHandler @ 0313c308 */
    FUN_01bab630(&System_Action<object>_TypeInfo);
    DAT_04565d8c = 1;
  }
                    /* try { // try from 0313c1b8 to 0323c1bb has its CatchHandler @ 0313c278 */
  source = (__this->fields).LKIMJCGKOHH;
  do {
                    /* try { // try from 0313c1bc to 0323c213 has its CatchHandler @ 0313beb0 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<object>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<object>_TypeInfo);
      if (lVar4 == 0) {
                    /* try { // try from 0313c21c to 0323c21f has its CatchHandler @ 0313c310 */
                    /* try { // try from 0313c220 to 0323c233 has its CatchHandler @ 0313c324 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_object__o *)FUN_01c07368(&(__this->fields).LKIMJCGKOHH,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* try { // try from 0313c214 to 0323c217 has its CatchHandler @ 0313c31c */
                    /* try { // try from 0313c218 to 0323c21b has its CatchHandler @ 0313c324 */
  return;
}

