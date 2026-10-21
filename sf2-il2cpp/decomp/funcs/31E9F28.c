// WideScreenController$$Run @ RVA 0x31E9F28

void WideScreenController__Run(WideScreenController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Camera_o *pUVar5;
  UnityEngine_Object_o *x;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  undefined8 uVar6;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Object_c *pUVar7;
  WideScreenController_StaticFields *pWVar8;
  System_Action_o *pSVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s3;
  
  if ((DAT_04566d88 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<Graphic>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566d88 = 1;
    method = extraout_x1;
  }
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(WideScreenController_TypeInfo,method);
  }
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar11 = 1.7777778;
  fVar12 = (float)iVar3;
  pUVar4 = (__this->fields)._LeftBorder;
                    /* try { // try from 032e9fbc to 033e9fbf has its CatchHandler @ 032e9fec */
                    /* try { // try from 032e9fc0 to 033e9fc3 has its CatchHandler @ 032e9fe8 */
  if ((float)iVar2 / fVar12 <= 1.7777778) {
    Util__IHPDCBOFHPA(pUVar4,false,(MethodInfo *)0x0);
    Util__IHPDCBOFHPA((__this->fields)._RightBorder,false,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 032e9fc4 to 033e9fc7 has its CatchHandler @ 032e9fe4 */
                    /* try { // try from 032e9fc8 to 033e9fcb has its CatchHandler @ 032e9fe0 */
                    /* try { // try from 032e9fcc to 033e9fcf has its CatchHandler @ 032e9fd4 */
                    /* try { // try from 032e9fd0 to 033e9fff has its CatchHandler @ 032e9cd4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9fcc with catch @ 032e9fd4
                        */
  Util__IHPDCBOFHPA(pUVar4,true,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9e08 with catch @ 032e9fd8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9de0 with catch @ 032e9fdc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9fc8 with catch @ 032e9fe0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9fc4 with catch @ 032e9fe4
                        */
  Util__IHPDCBOFHPA((__this->fields)._RightBorder,true,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9fc0 with catch @ 032e9fe8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9fbc with catch @ 032e9fec
                        */
  pUVar5 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9db0 with catch @ 032e9ff0
                        */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032ea000 to 033ea003 has its CatchHandler @ 032ea028 */
                    /* try { // try from 032ea004 to 033ea02f has its CatchHandler @ 032e9cd4 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    pUVar4 = (__this->fields)._LeftBorder;
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_032ea164;
                    /* catch() { ... } // from try @ 032ea000 with catch @ 032ea028 */
                    /* try { // try from 032ea030 to 033ea037 has its CatchHandler @ 032ea04c */
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>
                  (pUVar4,Method_UnityEngine_GameObject_GetComponent<Graphic>__);
                    /* try { // try from 032ea038 to 033ea043 has its CatchHandler @ 032e9cd4 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032ea044 to 033ea04b has its CatchHandler @ 032ea04c */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ea030 with catch @ 032ea04c
                       catch(type#2 @ 00000000) { ... } // from try @ 032ea044 with catch @ 032ea04c
                        */
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_032ea164;
      pUVar7 = x->klass;
      uVar6._0_2_ = pUVar7[1]._2.interfaces_count;
      uVar6._2_2_ = pUVar7[1]._2.interface_offsets_count;
      uVar6._4_1_ = pUVar7[1]._2.typeHierarchyDepth;
      uVar6._5_1_ = pUVar7[1]._2.genericRecursionDepth;
      uVar6._6_1_ = pUVar7[1]._2.rank;
      uVar6._7_1_ = pUVar7[1]._2.minimumAlignment;
      fVar10 = (float)(**(code **)&pUVar7[1]._2.field_count)(x,uVar6);
    }
    else {
      in_s3 = 1.0;
      fVar10 = 0.0;
      fVar11 = 0.0;
      fVar12 = 0.0;
    }
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032ea0e0 to 033ea193 has its CatchHandler @ 032ea0e0
                       catch() { ... } // from try @ 032ea0e0 with catch @ 032ea0e0
                       catch() { ... } // from try @ 032ea1b0 with catch @ 032ea0e0
                       catch() { ... } // from try @ 032ea1f8 with catch @ 032ea0e0
                       catch() { ... } // from try @ 032ea228 with catch @ 032ea0e0 */
    pWVar8 = WideScreenController_TypeInfo->static_fields;
    (pWVar8->BorderColor).fields.r = fVar10;
    (pWVar8->BorderColor).fields.g = fVar11;
    (pWVar8->BorderColor).fields.b = fVar12;
    (pWVar8->BorderColor).fields.a = in_s3;
    pUVar5 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Camera_o *)0x0) goto LAB_032ea164;
    UnityEngine_Camera__set_backgroundColor
              (pUVar5,(UnityEngine_Color_o)
                      (WideScreenController_TypeInfo->static_fields->BorderColor).fields,
               (MethodInfo *)0x0);
    method_00 = extraout_x1_01;
  }
  WideScreenController__AHLNBPFCAJC(__this,method_00);
  WideScreenController__GEOHMHPLJCP(__this,method_01);
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = WideScreenController_TypeInfo->static_fields->KGDDEONFPED;
  if (pSVar9 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032ea160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar9->fields).super.super.invoke_impl)
              ((pSVar9->fields).super.super.method_code,(pSVar9->fields).super.super.method);
    return;
  }
LAB_032ea164:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

