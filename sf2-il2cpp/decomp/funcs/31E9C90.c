// WideScreenController$$GEOHMHPLJCP @ RVA 0x31E9C90

void WideScreenController__GEOHMHPLJCP(WideScreenController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *LCMJHHCNGBL;
  UnityEngine_RectTransform_o *GDDNCGHPCEM;
  UnityEngine_Transform_o *y;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *pMVar3;
  int index;
  float BLENDMCELBE;
  
  if ((DAT_04566d87 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 032e9cd4 to 033e9daf has its CatchHandler @ 032e9cd4
                       catch() { ... } // from try @ 032e9cd4 with catch @ 032e9cd4
                       catch() { ... } // from try @ 032e9e14 with catch @ 032e9cd4
                       catch() { ... } // from try @ 032e9fd0 with catch @ 032e9cd4
                       catch() { ... } // from try @ 032ea004 with catch @ 032e9cd4
                       catch() { ... } // from try @ 032ea038 with catch @ 032e9cd4 */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566d87 = 1;
    method = extraout_x1;
  }
  LCMJHHCNGBL = WideScreenController__MBEOLOBEACM(__this,method);
  pMVar3 = extraout_x1_00;
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(WideScreenController_TypeInfo);
    pMVar3 = extraout_x1_01;
  }
  BLENDMCELBE = WideScreenController__MOFOODOFDIO(LCMJHHCNGBL,pMVar3);
  if (LCMJHHCNGBL == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = UnityEngine_Transform__get_childCount
                    ((UnityEngine_Transform_o *)LCMJHHCNGBL,(MethodInfo *)0x0);
  if (0 < iVar2) {
    index = 0;
    do {
      GDDNCGHPCEM = (UnityEngine_RectTransform_o *)
                    UnityEngine_Transform__GetChild
                              ((UnityEngine_Transform_o *)LCMJHHCNGBL,index,(MethodInfo *)0x0);
      y = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)GDDNCGHPCEM,(UnityEngine_Object_o *)y,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        if ((GDDNCGHPCEM != (UnityEngine_RectTransform_o *)0x0) &&
           (GDDNCGHPCEM->klass != UnityEngine_RectTransform_TypeInfo)) {
          GDDNCGHPCEM = (UnityEngine_RectTransform_o *)0x0;
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032e9db0 to 033e9db7 has its CatchHandler @ 032e9ff0 */
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)GDDNCGHPCEM,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pMVar3 = extraout_x1_02;
          if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar3 = extraout_x1_03;
          }
                    /* try { // try from 032e9de0 to 033e9df3 has its CatchHandler @ 032e9fdc */
          WideScreenController__NKLGCNHLBAF(GDDNCGHPCEM,BLENDMCELBE,pMVar3);
        }
      }
      index = index + 1;
      iVar2 = UnityEngine_Transform__get_childCount
                        ((UnityEngine_Transform_o *)LCMJHHCNGBL,(MethodInfo *)0x0);
    } while (index < iVar2);
  }
                    /* try { // try from 032e9e08 to 033e9e13 has its CatchHandler @ 032e9fd8 */
                    /* try { // try from 032e9e14 to 033e9fbb has its CatchHandler @ 032e9cd4 */
  return;
}

