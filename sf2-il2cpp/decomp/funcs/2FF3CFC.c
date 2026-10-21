// Nekki.SF2.GUI.Scenes.LoaderScreen$$CreateEnemiesScreen @ RVA 0x2FF3CFC

void Nekki_SF2_GUI_Scenes_LoaderScreen__CreateEnemiesScreen
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,
               System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,int32_t DPJIDNBJIBG,
               bool CGMFGFBHMHK,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_Component_o *__this_00;
  System_String_o *CNGMCOBNAGO;
  PBAKFOBIHEG_o *pPVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o *pNVar9;
  UnityEngine_RectTransform_o *parent;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o **ppNVar10;
  float fVar11;
  
  if ((DAT_04565a85 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<EnemiesScreen>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_LoaderScreen_FNOJFNCGHHJ__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<EnemiesScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565a85 = 1;
  }
  pNVar9 = (__this->fields)._EnemiesScreenPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    Nekki_SF2_GUI_Scenes_LoaderScreen__DKNNDNIGMIM(__this,method_00);
    return;
  }
  pNVar9 = (__this->fields)._EnemiesScreenPrefab;
  parent = (__this->fields)._MountRoot;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (UnityEngine_Component_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)pNVar9,(UnityEngine_Transform_o *)parent,
                         Method_UnityEngine_Object_Instantiate<EnemiesScreen>__);
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    pNVar9 = (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)
             UnityEngine_Component__GetComponent<object>
                       (__this_00,Method_UnityEngine_Component_GetComponent<EnemiesScreen>__);
    ppNVar10 = &(__this->fields).LIDCNGFPOOI;
    *ppNVar10 = pNVar9;
    thunk_FUN_01c20e04(ppNVar10,pNVar9);
    pNVar9 = *ppNVar10;
    CNGMCOBNAGO = Nekki_SF2_GUI_Scenes_LoaderScreen__MEJGJEGFCJF(__this,method_01);
    if (pNVar9 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
      Nekki_SF2_GUI_Fight_EnemiesScreen__Init
                (pNVar9,DFGLEOANOFI,DPJIDNBJIBG,CGMFGFBHMHK,CNGMCOBNAGO,(MethodInfo *)0x0);
      pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar4 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      pNVar9 = (__this->fields).LIDCNGFPOOI;
      if ((pNVar9 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) && (pPVar3 != (PBAKFOBIHEG_o *)0x0)
         ) {
        pPVar6 = pPVar3->klass;
        fVar11 = (pNVar9->fields).ACFFOAPPNBD;
        uVar1._0_1_ = (pPVar6->_2).rank;
        uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar1;
        if (uVar7 != 0) {
          piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar5 = pPVar6->vtable + (*piVar8 + 2);
              goto LAB_030f3ef0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,2);
LAB_030f3ef0:
                    /* WARNING: Could not recover jumptable at 0x030f3f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar5->methodPtr)((ulong)(uint)fVar11,pPVar3,uVar4,pVVar5->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

