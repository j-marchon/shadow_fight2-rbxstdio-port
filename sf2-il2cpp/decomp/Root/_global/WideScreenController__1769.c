// TypeDefIndex 1769
// Namespace: 
// public class WideScreenController : MonoBehaviour
// Fields:
//   private GameObject _LeftBorder; // 0x20
//   private GameObject _RightBorder; // 0x28
//   private bool _Flag; // 0x30
//   private const float KCFOLNCENKB = 1920;
//   private const float IAIGIACODDB = 1080;
//   private const float CJBGELLGPON = 1.7777778;
//   private const float FLGCCAIOHGI = 1536;
//   private const float MMDEBECMCJE = 2730.6667;
//   private Vector2 NBJELGMNNEJ; // 0x34
//   private static Action KGDDEONFPED; // 0x0
//   public static Color BorderColor; // 0x8

// ===== private static void .cctor()  [RVA 0x31E9BA8]
// WideScreenController$$.cctor @ RVA 0x31E9BA8

void WideScreenController___cctor(MethodInfo *method)

{
  System_Action_o *pSVar1;
  WideScreenController_StaticFields *pWVar2;
  
  if ((DAT_04566d86 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_WideScreenController_<>c_GDNCHMNHBHE__);
    FUN_01bab630(&WideScreenController_<>c_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566d86 = 1;
  }
  if ((WideScreenController_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  WideScreenController_TypeInfo->static_fields->KGDDEONFPED = pSVar1;
  thunk_FUN_01c20e04(WideScreenController_TypeInfo->static_fields,pSVar1);
  pWVar2 = WideScreenController_TypeInfo->static_fields;
  (pWVar2->BorderColor).fields.b = 0.0;
  (pWVar2->BorderColor).fields.a = 1.0;
  (pWVar2->BorderColor).fields.r = 0.0;
  (pWVar2->BorderColor).fields.g = 0.0;
  return;
}


// ===== private void GEOHMHPLJCP()  [RVA 0x31E9C90]
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


// ===== public static bool ShouldRenderBorders()  [RVA 0x31E915C]
// WideScreenController$$ShouldRenderBorders @ RVA 0x31E915C

bool WideScreenController__ShouldRenderBorders(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return 1.7777778 < (float)iVar1 / (float)iVar2;
}


// ===== public void Run()  [RVA 0x31E9F28]
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


// ===== private void AHLNBPFCAJC()  [RVA 0x31EA168]
// WideScreenController$$AHLNBPFCAJC @ RVA 0x31EA168

void WideScreenController__AHLNBPFCAJC(WideScreenController_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *method_00;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  
  if ((DAT_04566d89 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
                    /* try { // try from 032ea194 to 033ea19b has its CatchHandler @ 032ea1dc */
    DAT_04566d89 = 1;
  }
  pUVar1 = (__this->fields)._LeftBorder;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 032ea1a4 to 033ea1af has its CatchHandler @ 032ea1d8 */
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 032ea1b0 to 033ea1f3 has its CatchHandler @ 032ea0e0 */
    UnityEngine_TransformExtensions__SetLocalPositionX(pUVar2,-1364.0,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._RightBorder;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX(pUVar2,1364.0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ea1a4 with catch @ 032ea1d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ea194 with catch @ 032ea1dc
                        */
      pUVar3 = WideScreenController__MBEOLOBEACM(__this,method_00);
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 032ea1f4 to 033ea1f7 has its CatchHandler @ 032ea218 */
                    /* try { // try from 032ea1f8 to 033ea21f has its CatchHandler @ 032ea0e0 */
        fVar4 = (UVar5.fields.x + -2730.6667) * 0.5;
        if (fVar4 <= 0.0) {
          return;
        }
        pUVar1 = (__this->fields)._LeftBorder;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                    /* catch() { ... } // from try @ 032ea1f4 with catch @ 032ea218 */
          fVar4 = fVar4 + 100.0;
                    /* try { // try from 032ea220 to 033ea227 has its CatchHandler @ 032ea23c */
          pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 032ea228 to 033ea233 has its CatchHandler @ 032ea0e0 */
                    /* try { // try from 032ea234 to 033ea23b has its CatchHandler @ 032ea23c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ea220 with catch @ 032ea23c
                       catch(type#2 @ 00000000) { ... } // from try @ 032ea234 with catch @ 032ea23c
                        */
          if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar3->klass != UnityEngine_RectTransform_TypeInfo)) {
            pUVar3 = (UnityEngine_RectTransform_o *)0x0;
          }
          UnityEngine_TransformExtensions__SetSizeDeltaX(pUVar3,fVar4,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._RightBorder;
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar3 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 032ea260 to 033ea367 has its CatchHandler @ 032ea260
                       catch() { ... } // from try @ 032ea260 with catch @ 032ea260
                       catch() { ... } // from try @ 032ea418 with catch @ 032ea260
                       catch() { ... } // from try @ 032ea610 with catch @ 032ea260
                       catch() { ... } // from try @ 032ea620 with catch @ 032ea260
                       catch() { ... } // from try @ 032ea664 with catch @ 032ea260
                       catch() { ... } // from try @ 032ea698 with catch @ 032ea260 */
            if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar3->klass != UnityEngine_RectTransform_TypeInfo)) {
              pUVar3 = (UnityEngine_RectTransform_o *)0x0;
            }
            UnityEngine_TransformExtensions__SetSizeDeltaX(pUVar3,fVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void RunCustom(RectTransform JNPCENEINON)  [RVA 0x31EA2A4]
// WideScreenController$$RunCustom @ RVA 0x31EA2A4

void WideScreenController__RunCustom(UnityEngine_RectTransform_o *JNPCENEINON,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_RectTransform_o *LCMJHHCNGBL;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float BLENDMCELBE;
  
  if ((DAT_04566d8a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566d8a = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)JNPCENEINON,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if (1.7777778 < (float)iVar2 / (float)iVar3) {
      if (JNPCENEINON == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032ea368 to 033ea36f has its CatchHandler @ 032ea650 */
      LCMJHHCNGBL = (UnityEngine_RectTransform_o *)
                    UnityEngine_Transform__get_root
                              ((UnityEngine_Transform_o *)JNPCENEINON,(MethodInfo *)0x0);
      if (LCMJHHCNGBL == (UnityEngine_RectTransform_o *)0x0) {
        LCMJHHCNGBL = (UnityEngine_RectTransform_o *)0x0;
      }
      else if (LCMJHHCNGBL->klass != UnityEngine_RectTransform_TypeInfo) {
        LCMJHHCNGBL = (UnityEngine_RectTransform_o *)0x0;
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)LCMJHHCNGBL,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 032ea3bc to 033ea3cf has its CatchHandler @ 032ea63c */
        method_00 = extraout_x1_00;
        if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_01;
        }
        BLENDMCELBE = WideScreenController__MOFOODOFDIO(LCMJHHCNGBL,method_00);
                    /* try { // try from 032ea3e0 to 033ea3f3 has its CatchHandler @ 032ea620 */
        WideScreenController__NKLGCNHLBAF(JNPCENEINON,BLENDMCELBE,method_01);
        return;
      }
    }
  }
  return;
}


// ===== private void Awake()  [RVA 0x31EA3F8]
// WideScreenController$$Awake @ RVA 0x31EA3F8

void WideScreenController__Awake(WideScreenController_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector2_Fields UVar1;
  
  __this_00 = WideScreenController__MBEOLOBEACM(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 032ea40c to 033ea417 has its CatchHandler @ 032ea624 */
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 032ea418 to 033ea5fb has its CatchHandler @ 032ea260 */
    (__this->fields).NBJELGMNNEJ.fields = UVar1;
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private RectTransform MBEOLOBEACM()  [RVA 0x31E9E1C]
// WideScreenController$$MBEOLOBEACM @ RVA 0x31E9E1C

UnityEngine_RectTransform_o *
WideScreenController__MBEOLOBEACM(WideScreenController_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04566d8b & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566d8b = 1;
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0);
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}


// ===== public void .ctor()  [RVA 0x31EA434]
// WideScreenController$$.ctor @ RVA 0x31EA434

void WideScreenController___ctor(WideScreenController_o *__this,MethodInfo *method)

{
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  (__this->fields).NBJELGMNNEJ.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static float GetVisibleSceneWidth(float KJNOLCAONEB, float JLPMKKKMANE)  [RVA 0x31E9198]
// WideScreenController$$GetVisibleSceneWidth @ RVA 0x31E9198

float WideScreenController__GetVisibleSceneWidth
                (float KJNOLCAONEB,float JLPMKKKMANE,MethodInfo *method)

{
  float fVar1;
  
                    /* try { // try from 032e919c to 033e91c3 has its CatchHandler @ 032e93b0 */
  fVar1 = JLPMKKKMANE * 1.7777778;
  if (KJNOLCAONEB / JLPMKKKMANE <= 1.7777778) {
    fVar1 = KJNOLCAONEB;
  }
  return fVar1;
}


// ===== private static float MOFOODOFDIO(RectTransform LCMJHHCNGBL)  [RVA 0x31E9E8C]
// WideScreenController$$MOFOODOFDIO @ RVA 0x31E9E8C

float WideScreenController__MOFOODOFDIO(UnityEngine_RectTransform_o *LCMJHHCNGBL,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (LCMJHHCNGBL != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_sizeDelta(LCMJHHCNGBL,(MethodInfo *)0x0);
    fVar1 = UVar3.fields.x + -2730.6667;
    fVar2 = (float)(int)(fVar1 * 0.5) + 1.0;
    if (fVar1 <= 0.0) {
      fVar2 = 0.0;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x31EA48C]
// WideScreenController$$Update @ RVA 0x31EA48C

void WideScreenController__Update(WideScreenController_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_Fields UVar5;
  
  fVar2 = (__this->fields).NBJELGMNNEJ.fields.x;
  fVar3 = (__this->fields).NBJELGMNNEJ.fields.y;
  pUVar1 = WideScreenController__MBEOLOBEACM(__this,method);
  if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032ea520;
  UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
  fVar2 = fVar2 - UVar4.fields.x;
  fVar3 = fVar3 - UVar4.fields.y;
  if (fVar2 * fVar2 + fVar3 * fVar3 <= 0.1) {
    method_01 = method_00;
    if ((__this->fields)._Flag != false) goto LAB_032ea4f4;
  }
  else {
    pUVar1 = WideScreenController__MBEOLOBEACM(__this,method_00);
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032ea520;
    UVar5 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    (__this->fields).NBJELGMNNEJ.fields = UVar5;
    method_01 = extraout_x1;
LAB_032ea4f4:
    (__this->fields)._Flag = false;
    WideScreenController__Run(__this,method_01);
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
    return;
  }
LAB_032ea520:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void add_UpdateEvent(Action CJNHFNHJHPE)  [RVA 0x31EA524]
// WideScreenController$$add_UpdateEvent @ RVA 0x31EA524

void WideScreenController__add_UpdateEvent(System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *a;
  
  if ((DAT_04566d8c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566d8c = 1;
    method = extraout_x1;
  }
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(WideScreenController_TypeInfo,method);
  }
  a = WideScreenController_TypeInfo->static_fields->KGDDEONFPED;
  do {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)FUN_01c07368(WideScreenController_TypeInfo->static_fields,pSVar2,a);
    bVar1 = a != pSVar3;
    a = pSVar3;
  } while (bVar1);
  return;
}


// ===== private static void NKLGCNHLBAF(RectTransform GDDNCGHPCEM, float BLENDMCELBE)  [RVA 0x31E9ED4]
// WideScreenController$$NKLGCNHLBAF @ RVA 0x31E9ED4

void WideScreenController__NKLGCNHLBAF
               (UnityEngine_RectTransform_o *GDDNCGHPCEM,float BLENDMCELBE,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o value;
  
  if (GDDNCGHPCEM != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_offsetMax(GDDNCGHPCEM,(MethodInfo *)0x0);
    UVar1.fields.x = -BLENDMCELBE;
    UnityEngine_RectTransform__set_offsetMax(GDDNCGHPCEM,UVar1,(MethodInfo *)0x0);
    UVar1 = UnityEngine_RectTransform__get_offsetMin(GDDNCGHPCEM,(MethodInfo *)0x0);
    value.fields.y = UVar1.fields.y;
    value.fields.x = BLENDMCELBE;
    UnityEngine_RectTransform__set_offsetMin(GDDNCGHPCEM,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void remove_UpdateEvent(Action CJNHFNHJHPE)  [RVA 0x31EA5FC]
// WideScreenController$$remove_UpdateEvent @ RVA 0x31EA5FC

void WideScreenController__remove_UpdateEvent(System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *source;
  
                    /* try { // try from 032ea5fc to 033ea5ff has its CatchHandler @ 032ea648 */
                    /* try { // try from 032ea600 to 033ea603 has its CatchHandler @ 032ea644 */
                    /* try { // try from 032ea604 to 033ea607 has its CatchHandler @ 032ea640 */
                    /* try { // try from 032ea608 to 033ea60b has its CatchHandler @ 032ea638 */
                    /* try { // try from 032ea60c to 033ea60f has its CatchHandler @ 032ea634 */
                    /* try { // try from 032ea610 to 033ea613 has its CatchHandler @ 032ea260 */
                    /* try { // try from 032ea614 to 033ea617 has its CatchHandler @ 032ea630 */
                    /* try { // try from 032ea618 to 033ea61b has its CatchHandler @ 032ea62c */
                    /* try { // try from 032ea61c to 033ea61f has its CatchHandler @ 032ea628 */
  if ((DAT_04566d8d & 1) == 0) {
                    /* catch() { ... } // from try @ 032ea3e0 with catch @ 032ea620
                       try { // try from 032ea620 to 033ea65f has its CatchHandler @ 032ea260 */
                    /* catch() { ... } // from try @ 032ea40c with catch @ 032ea624 */
                    /* catch() { ... } // from try @ 032ea61c with catch @ 032ea628 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 032ea618 with catch @ 032ea62c */
                    /* catch() { ... } // from try @ 032ea614 with catch @ 032ea630 */
                    /* catch() { ... } // from try @ 032ea60c with catch @ 032ea634 */
    FUN_01bab630(&WideScreenController_TypeInfo);
                    /* catch() { ... } // from try @ 032ea608 with catch @ 032ea638 */
                    /* catch() { ... } // from try @ 032ea3bc with catch @ 032ea63c */
    DAT_04566d8d = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 032ea604 with catch @ 032ea640 */
                    /* catch() { ... } // from try @ 032ea600 with catch @ 032ea644 */
                    /* catch() { ... } // from try @ 032ea5fc with catch @ 032ea648 */
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032ea38c with catch @ 032ea64c */
    thunk_FUN_01ba7564(WideScreenController_TypeInfo,method);
                    /* catch() { ... } // from try @ 032ea368 with catch @ 032ea650 */
  }
                    /* try { // try from 032ea660 to 033ea663 has its CatchHandler @ 032ea688 */
  source = WideScreenController_TypeInfo->static_fields->KGDDEONFPED;
  do {
                    /* try { // try from 032ea664 to 033ea68f has its CatchHandler @ 032ea260 */
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 032ea660 with catch @ 032ea688 */
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
                    /* try { // try from 032ea690 to 033ea697 has its CatchHandler @ 032ea6ac */
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032ea698 to 033ea6a3 has its CatchHandler @ 032ea260 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032ea6a4 to 033ea6ab has its CatchHandler @ 032ea6ac */
                    /* catch() { ... } // from try @ 032ea690 with catch @ 032ea6ac
                       catch() { ... } // from try @ 032ea6a4 with catch @ 032ea6ac */
    pSVar3 = (System_Action_o *)
             FUN_01c07368(WideScreenController_TypeInfo->static_fields,pSVar2,source);
    bVar1 = source != pSVar3;
    source = pSVar3;
  } while (bVar1);
  return;
}

