// TypeDefIndex 2672
// Namespace: 
// public class OGNCMFBMBMB
// Fields:
//   private readonly Dictionary<string, OGNCMFBMBMB.AFGELJDFHIF> EMOGELNBIOO; // 0x10
//   private RectTransform HHCKEAILEEN; // 0x18
//   private static OGNCMFBMBMB CBDMFFMCJBK; // 0x0

// ===== public static OGNCMFBMBMB AIHNLLGNBLC()  [RVA 0x33C4434]
// OGNCMFBMBMB$$AIHNLLGNBLC @ RVA 0x33C4434

OGNCMFBMBMB_o * OGNCMFBMBMB__AIHNLLGNBLC(MethodInfo *method)

{
  OGNCMFBMBMB_o *pOVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_04567de5 & 1) == 0) {
    FUN_01bab630(&OGNCMFBMBMB_TypeInfo);
    DAT_04567de5 = 1;
  }
  pOVar1 = OGNCMFBMBMB_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pOVar1 == (OGNCMFBMBMB_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pOVar1 = auVar2._0_8_;
    OGNCMFBMBMB___ctor(pOVar1,auVar2._8_8_);
    OGNCMFBMBMB_TypeInfo->static_fields->CBDMFFMCJBK = pOVar1;
    thunk_FUN_01c20e04(OGNCMFBMBMB_TypeInfo->static_fields,pOVar1);
    pOVar1 = OGNCMFBMBMB_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  return pOVar1;
}


// ===== private OGNCMFBMBMB.AFGELJDFHIF CEKCKIDJLCL(string PMACBPAMPJA)  [RVA 0x33C475C]
// OGNCMFBMBMB$$CEKCKIDJLCL @ RVA 0x33C475C

OGNCMFBMBMB_AFGELJDFHIF_o *
OGNCMFBMBMB__CEKCKIDJLCL(OGNCMFBMBMB_o *__this,System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  OGNCMFBMBMB_AFGELJDFHIF_o *__this_00;
  undefined1 auVar3 [16];
  OGNCMFBMBMB_AFGELJDFHIF_o *local_28;
  
  if ((DAT_04567de6 & 1) == 0) {
    FUN_01bab630(&OGNCMFBMBMB_AFGELJDFHIF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_TryGetValue__
                );
    DAT_04567de6 = 1;
  }
  local_28 = (OGNCMFBMBMB_AFGELJDFHIF_o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EMOGELNBIOO;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_TryGetValue__
                      );
    if (!bVar1) {
      auVar3 = thunk_FUN_01bda818(OGNCMFBMBMB_AFGELJDFHIF_TypeInfo);
      __this_00 = auVar3._0_8_;
      OGNCMFBMBMB_AFGELJDFHIF___ctor(__this_00,auVar3._8_8_);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).EMOGELNBIOO;
      local_28 = __this_00;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_034c4820;
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar2,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)__this_00,
                 Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_Add__
                );
    }
    return local_28;
  }
LAB_034c4820:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void JHEIGLGFONB(string FEPLAGOGJNL, string LGKENDNKLOM = "")  [RVA 0x33C4904]
// OGNCMFBMBMB$$JHEIGLGFONB @ RVA 0x33C4904

void OGNCMFBMBMB__JHEIGLGFONB
               (System_String_o *FEPLAGOGJNL,System_String_o *LGKENDNKLOM,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *BKFOLMBMFNP;
  System_String_o *JLNPKGGFFDD;
  
  if ((DAT_04567de7 & 1) == 0) {
    FUN_01bab630(&OGNCMFBMBMB_var);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_2088/*": "*/);
    DAT_04567de7 = 1;
  }
  handle = OGNCMFBMBMB_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BKFOLMBMFNP = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0)
  ;
  JLNPKGGFFDD = System_String__Concat(LGKENDNKLOM,StringLiteral_2088/*": "*/,FEPLAGOGJNL,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA(BKFOLMBMFNP,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}


// ===== public void IFIEMIIMCKM()  [RVA 0x33C49BC]
// OGNCMFBMBMB$$IFIEMIIMCKM @ RVA 0x33C49BC

void OGNCMFBMBMB__IFIEMIIMCKM(OGNCMFBMBMB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567de8 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_Clear__
                );
    DAT_04567de8 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).EMOGELNBIOO;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,
               Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_Clear__
              );
    UnityEngine_TransformExtensions__DeleteAllChildrenObjects
              ((UnityEngine_Transform_o *)(__this->fields).HHCKEAILEEN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void .ctor()  [RVA 0x33C44B8]
// OGNCMFBMBMB$$.ctor @ RVA 0x33C44B8

void OGNCMFBMBMB___ctor(OGNCMFBMBMB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_03;
  UnityEngine_Transform_o *p;
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar2;
  
  if ((DAT_04567de9 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_TypeInfo);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_14124/*"UIObjectPool"*/);
    DAT_04567de9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>__ctor__);
  (__this->fields).EMOGELNBIOO =
       (System_Collections_Generic_Dictionary_string__OGNCMFBMBMB_AFGELJDFHIF__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_01,StringLiteral_14124/*"UIObjectPool"*/,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    __this_03 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
    if ((__this_03 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) &&
       (p = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_02,p,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_RectTransform_o *)
               Util__OHBILOGJCLA<object>(__this_01,Method_Util_OHBILOGJCLA<RectTransform>__);
      ppUVar2 = &(__this->fields).HHCKEAILEEN;
      *ppUVar2 = pUVar1;
      thunk_FUN_01c20e04(ppUVar2,pUVar1);
      pUVar1 = *ppUVar2;
      if (DAT_0455fa75 == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa75 = '\x01';
      }
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_sizeDelta
                  (pUVar1,(UnityEngine_Vector2_o)
                          (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        pUVar1 = *ppUVar2;
        if (DAT_0455fa75 == '\0') {
          FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
          DAT_0455fa75 = '\x01';
        }
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar1,(UnityEngine_Vector2_o)
                            (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          pUVar1 = *ppUVar2;
          if (DAT_0455fa7e == '\0') {
            FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
            DAT_0455fa7e = '\x01';
          }
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMax
                      (pUVar1,(UnityEngine_Vector2_o)
                              (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            pUVar1 = *ppUVar2;
            if (DAT_0455fa77 == '\0') {
              FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
              DAT_0455fa77 = '\x01';
            }
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchoredPosition3D
                        (pUVar1,(UnityEngine_Vector3_o)
                                (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              pUVar1 = *ppUVar2;
              if (DAT_0455fa7f == '\0') {
                FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                DAT_0455fa7f = '\x01';
              }
              if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_Transform__set_localScale
                          ((UnityEngine_Transform_o *)pUVar1,
                           (UnityEngine_Vector3_o)
                           (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,
                           (MethodInfo *)0x0);
                UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

