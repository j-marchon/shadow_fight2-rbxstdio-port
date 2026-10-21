// Nekki.SF2.GUI.Scenes.LoaderScreen$$DKNNDNIGMIM @ RVA 0x2FF3F1C

void Nekki_SF2_GUI_Scenes_LoaderScreen__DKNNDNIGMIM
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  UnityEngine_Component_o *__this_00;
  Nekki_SF2_GUI_Fight_VsScreen_o *pNVar4;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_01;
  Il2CppObject *pIVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  int index;
  MethodInfo *extraout_x1;
  CMAACCOMHBJ_o *pCVar7;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Fight_VsScreen_o **ppNVar8;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_Events_UnityEvent_o *pUVar9;
  
  if ((DAT_04565a99 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<VsScreen>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_LoaderScreen_MJBGODLMBGP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_LoaderScreen_OKPGCPAMLPB__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<VsScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565a99 = 1;
    method = extraout_x1;
  }
  pCVar7 = (__this->fields).FNCCNKDPDAB;
  if (pCVar7 != (CMAACCOMHBJ_o *)0x0) {
    lVar1 = 0x38;
    if ((pCVar7->fields).HIOHGCIKLNF != false) {
      lVar1 = 0x40;
    }
    x = *(UnityEngine_Object_o **)((long)&__this->klass + lVar1);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
LAB_030f3ff0:
      (__this->fields).AHAMOAJILMO = true;
      return;
    }
    parent = (__this->fields)._MountRoot;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = (UnityEngine_Component_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)x,(UnityEngine_Transform_o *)parent,
                           Method_UnityEngine_Object_Instantiate<VsScreen>__);
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      pNVar4 = (Nekki_SF2_GUI_Fight_VsScreen_o *)
               UnityEngine_Component__GetComponent<object>
                         (__this_00,Method_UnityEngine_Component_GetComponent<VsScreen>__);
      ppNVar8 = &(__this->fields).PNGEFADJKCH;
      *ppNVar8 = pNVar4;
      thunk_FUN_01c20e04(ppNVar8,pNVar4);
      __this_01 = (__this->fields).BGODEHNIMGC;
      if (__this_01 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
        iVar2 = (__this_01->fields)._size;
        index = (__this->fields).GPDAECEABGB;
        if (iVar2 <= index) {
          if (iVar2 < 1) goto LAB_030f3ff0;
          index = 0;
        }
        pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
        if (*ppNVar8 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) {
          pUVar9 = ((*ppNVar8)->fields).DALFPNPJBCO;
          pUVar6 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar9,pUVar6,(MethodInfo *)0x0);
            if (*ppNVar8 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) {
              pUVar9 = ((*ppNVar8)->fields).NOHDCBBOPMJ;
              pUVar6 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch() { ... } // from try @ 030f4160 with catch @ 030f4108
                       catch() { ... } // from try @ 030f4194 with catch @ 030f4108
                       catch() { ... } // from try @ 030f41c8 with catch @ 030f4108
                       catch() { ... } // from try @ 030f4248 with catch @ 030f4108 */
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar9,pUVar6,(MethodInfo *)0x0);
                pNVar4 = *ppNVar8;
                if (pNVar4 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) {
                    /* try { // try from 030f4130 to 031f414f has its CatchHandler @ 030f4164 */
                    /* WARNING: Could not recover jumptable at 0x030f4154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(pNVar4->klass->vtable)._5_Init.methodPtr)
                            (pNVar4,(__this->fields).KCHOEJOHIMM,pIVar5,0,
                             (pNVar4->klass->vtable)._5_Init.method);
                  return;
                }
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

