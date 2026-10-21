// GMGALNFPLPA$$ANPIONBGFBF @ RVA 0x306DF48

void GMGALNFPLPA__ANPIONBGFBF(GMGALNFPLPA_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  CocosAnimation_o *pCVar2;
  
                    /* try { // try from 0316df48 to 0326df4b has its CatchHandler @ 0316e14c */
                    /* try { // try from 0316df4c to 0326df6f has its CatchHandler @ 0316e154 */
  if ((DAT_04565f49 & 1) == 0) {
                    /* try { // try from 0316df70 to 0326df7f has its CatchHandler @ 0316e150 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f49 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0316df80 to 0326e16b has its CatchHandler @ 0316de3c */
  (__this->fields).DJIFHDOPPPE = true;
  pCVar2 = (__this->fields).AKBKJNNOMOD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pCVar2 = (__this->fields).AKBKJNNOMOD;
    if (pCVar2 == (CocosAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    CocosAnimation__ClearSpriteResetFrames(pCVar2,(MethodInfo *)0x0);
  }
  GMGALNFPLPA__NOKHGKKMCHA(__this,false,method_00);
  return;
}

