// MNLIBPAOCLG$$OOLIMJGIIOL @ RVA 0x31E80B8

void MNLIBPAOCLG__OOLIMJGIIOL(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  UnityEngine_SpriteRenderer_o **ppUVar2;
  UnityEngine_SpriteRenderer_o *x;
  
  if ((DAT_04566d76 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d76 = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).JNBHKOBOIMD;
  x = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 032e8108 to 033e81eb has its CatchHandler @ 032e8108
                       catch() { ... } // from try @ 032e8108 with catch @ 032e8108
                       catch() { ... } // from try @ 032e8378 with catch @ 032e8108
                       catch() { ... } // from try @ 032e8418 with catch @ 032e8108
                       catch() { ... } // from try @ 032e8420 with catch @ 032e8108
                       catch() { ... } // from try @ 032e84dc with catch @ 032e8108 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppUVar2,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      *ppUVar2 = (UnityEngine_SpriteRenderer_o *)0x0;
      thunk_FUN_01c20e04(ppUVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

