// TypeDefIndex 25
// Namespace: Nekki.SF2.GUI.Scenes
// public class LoaderScreen : MonoBehaviour
// Fields:
//   private static Coroutine KCOCLOFNJIG; // 0x0
//   private static DBMPKPJGIPI BGDMCNDAIDC; // 0x8
//   private static DBMPKPJGIPI BJFGHDKLEKH; // 0xC
//   private GameObject _LoaderType1; // 0x20
//   private GameObject _LoaderType2; // 0x28
//   private EnemiesScreen _EnemiesScreenPrefab; // 0x30
//   private VsScreen _VsScreenPrefab; // 0x38
//   private VsScreen _PvpVsScreenPrefab; // 0x40
//   private LabelAlias _LoaderHint; // 0x48
//   private LabelAlias _LoaderHintNext; // 0x50
//   private RectTransform _MountRoot; // 0x58
//   private RectMask2D _MountMaskRoot; // 0x60
//   private EnemiesScreen LIDCNGFPOOI; // 0x68
//   private VsScreen PNGEFADJKCH; // 0x70
//   private bool FAGMLMDNEHA; // 0x78
//   private bool DIKILJAKEOG; // 0x79
//   private FightList FMPFMKFODMP; // 0x80
//   private ModelParameters KCHOEJOHIMM; // 0x88
//   private List<ModelParameters> BGODEHNIMGC; // 0x90
//   private int GPDAECEABGB; // 0x98
//   private bool AHAMOAJILMO; // 0x9C
//   private bool IHEIBDOIGAE; // 0x9D
//   private CMAACCOMHBJ FNCCNKDPDAB; // 0xA0
//   private int PGOCNMLFPIJ; // 0xA8
//   private int GIIFJPPGGON; // 0xAC
//   private int JNKNDDFEIAO; // 0xB0
//   private List<GameUtils.IEKBEIOCOPO> JPOBFBBGOBC; // 0xB8
//   private static LoaderScreen <JPDNDPEAJAL>k__BackingField; // 0x10

// ===== private void NEJJBIDOKGN()  [RVA 0x2FF3A2C]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$NEJJBIDOKGN @ RVA 0x2FF3A2C

void Nekki_SF2_GUI_Scenes_LoaderScreen__NEJJBIDOKGN
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *obj;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o **ppNVar2;
  Nekki_SF2_GUI_Fight_VsScreen_o **ppNVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o *pNVar5;
  Nekki_SF2_GUI_Fight_VsScreen_o *x;
  
  if ((DAT_04565a81 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565a81 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).LIDCNGFPOOI;
  pNVar5 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = *ppNVar2;
    if (pNVar5 == (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) goto LAB_030f3bac;
    if ((pNVar5->fields)._BOGAKJOFOEK_k__BackingField == false) {
      Util__ONIDAJMNLHG((UnityEngine_MonoBehaviour_o *)pNVar5,false,(MethodInfo *)0x0);
    }
  }
  (__this->fields).LIDCNGFPOOI = (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  ppNVar3 = &(__this->fields).PNGEFADJKCH;
  x = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar3 == (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) goto LAB_030f3bac;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject
                    ((UnityEngine_Component_o *)*ppNVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    *ppNVar3 = (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
  }
  pNVar4 = (__this->fields)._LoaderHint;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._LoaderHint;
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_030f3bac;
    (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
              (pNVar4,StringLiteral_1/*""*/,(pNVar4->klass->vtable)._75_set_text.method);
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
LAB_030f3bac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool get_IsLoadingLevel()  [RVA 0x2FF3BB0]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$get_IsLoadingLevel @ RVA 0x2FF3BB0

bool Nekki_SF2_GUI_Scenes_LoaderScreen__get_IsLoadingLevel(MethodInfo *method)

{
  if ((DAT_04565a82 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a82 = 1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG !=
         (UnityEngine_Coroutine_o *)0x0;
}


// ===== private IEnumerator PGDKFMBIDAI()  [RVA 0x2FF3C10]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$PGDKFMBIDAI @ RVA 0x2FF3C10

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Scenes_LoaderScreen__PGDKFMBIDAI
          (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a83 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE_TypeInfo);
    DAT_04565a83 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public static LoaderScreen get_Instance()  [RVA 0x2FF3CA4]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$get_Instance @ RVA 0x2FF3CA4

Nekki_SF2_GUI_Scenes_LoaderScreen_o *
Nekki_SF2_GUI_Scenes_LoaderScreen__get_Instance(MethodInfo *method)

{
  if ((DAT_04565a84 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a84 = 1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
}


// ===== public void CreateEnemiesScreen(List<ModelParameters> DFGLEOANOFI, int DPJIDNBJIBG, bool CGMFGFBHMHK)  [RVA 0x2FF3CFC]
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


// ===== private IEnumerator GPALILACOAP()  [RVA 0x2FF42F4]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$GPALILACOAP @ RVA 0x2FF42F4

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Scenes_LoaderScreen__GPALILACOAP
          (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a86 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI_TypeInfo);
    DAT_04565a86 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void OKPGCPAMLPB()  [RVA 0x2FF4388]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$OKPGCPAMLPB @ RVA 0x2FF4388

void Nekki_SF2_GUI_Scenes_LoaderScreen__OKPGCPAMLPB
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Fight_VsScreen_o *pNVar1;
  
  pNVar1 = (__this->fields).PNGEFADJKCH;
  if ((pNVar1 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) &&
     (__this_00 = (pNVar1->fields).NOHDCBBOPMJ, __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
     ) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields).AHAMOAJILMO = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator IJCLAIMBHLE()  [RVA 0x2FF43BC]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$IJCLAIMBHLE @ RVA 0x2FF43BC

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Scenes_LoaderScreen__IJCLAIMBHLE
          (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a87 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI_TypeInfo);
    DAT_04565a87 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private static void FKOAMAIPLOL(LoaderScreen CJNHFNHJHPE)  [RVA 0x2FF443C]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$FKOAMAIPLOL @ RVA 0x2FF443C

void Nekki_SF2_GUI_Scenes_LoaderScreen__FKOAMAIPLOL
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Scenes_LoaderScreen_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a88 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a88 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
  }
  ppNVar1 = &Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
  ;
  *ppNVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppNVar1,CJNHFNHJHPE);
  return;
}


// ===== public void Load()  [RVA 0x2FF449C]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$Load @ RVA 0x2FF449C

void Nekki_SF2_GUI_Scenes_LoaderScreen__Load
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  UnityEngine_Vector3_StaticFields *pUVar8;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o **ppSVar9;
  Nekki_SF2_GUI_LabelAlias_o **ppNVar10;
  Nekki_SF2_GUI_LabelAlias_o **ppNVar11;
  Nekki_SF2_GUI_LabelAlias_o *pNVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04565a89 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GameUtils_LGJODJDHCJF_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_get_Count__);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&StringLiteral_8574/*"LoaderScreen::Load: can't load another scene while is loading scene"*/);
    DAT_04565a89 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG !=
      (UnityEngine_Coroutine_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_8574/*"LoaderScreen::Load: can't load another scene while is loading scene"*/,(MethodInfo *)0x0);
    return;
  }
  (__this->fields).FAGMLMDNEHA = false;
  (__this->fields).DIKILJAKEOG = false;
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__ClearTextureCache((MethodInfo *)0x0);
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CLFCKIFNGHA__ILFKGOLHMBA(false,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b80 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
      DAT_04565b80 = '\x01';
    }
    if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BGDMCNDAIDC == 0) {
      bVar2 = true;
    }
    else {
      if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b80 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
        DAT_04565b80 = '\x01';
      }
      if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BGDMCNDAIDC == 8;
    }
    pUVar4 = (__this->fields)._LoaderType1;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,bVar2,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._LoaderType2;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,(bool)(bVar2 ^ 1),(MethodInfo *)0x0);
        if ((GameUtils_LGJODJDHCJF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = GameUtils_LGJODJDHCJF__LDKFHCIMHJE((MethodInfo *)0x0);
        ppSVar9 = &(__this->fields).JPOBFBBGOBC;
        *ppSVar9 = pSVar5;
        thunk_FUN_01c20e04(ppSVar9,pSVar5);
        if (*ppSVar9 != (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) {
          pUVar4 = (__this->fields)._LoaderType2;
          (__this->fields).GIIFJPPGGON = ((*ppSVar9)->fields)._size + 1;
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
            if (!bVar2) {
LAB_030f4828:
              iVar3 = (__this->fields).PGOCNMLFPIJ;
              iVar1 = (__this->fields).GIIFJPPGGON;
              if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar3 = LIIFLGALGNK__HLMBDJOGONJ(iVar3,iVar1 + 1,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Scenes_LoaderScreen__EEJGCKMLOAP
                        (__this,iVar3,(__this->fields)._LoaderHintNext,in_x3);
              method_00 = extraout_x1_01;
              if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                method_00 = extraout_x1_02;
              }
              if (Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BJFGHDKLEKH == 6) {
                routine = Nekki_SF2_GUI_Scenes_LoaderScreen__PGDKFMBIDAI(__this,method_00);
              }
              else {
                routine = Nekki_SF2_GUI_Scenes_LoaderScreen__GPALILACOAP(__this,method_00);
              }
              pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine
                                 ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
              if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
              }
              Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG = pUVar7;
              thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields,pUVar7);
              return;
            }
            ppNVar10 = &(__this->fields)._LoaderHint;
            if ((*ppNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_Transform_o *)0x0)) {
              UVar13 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
              if (*ppNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0);
                ppNVar11 = &(__this->fields)._LoaderHintNext;
                if (((*ppNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                    (__this_00 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0),
                    __this_00 != (UnityEngine_Transform_o *)0x0)) &&
                   (value = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__set_localPosition(pUVar6,value,(MethodInfo *)0x0);
                  if ((*ppNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                     (pUVar6 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0),
                     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__set_localPosition(pUVar6,UVar13,(MethodInfo *)0x0);
                    pNVar12 = *ppNVar10;
                    *ppNVar10 = *ppNVar11;
                    thunk_FUN_01c20e04(ppNVar10);
                    *ppNVar11 = pNVar12;
                    thunk_FUN_01c20e04(ppNVar11,pNVar12);
                    if (*ppNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pUVar6 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0);
                      if (DAT_0455fffb == '\0') {
                        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                        DAT_0455fffb = '\x01';
                      }
                      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                        pUVar8 = UnityEngine_Vector3_TypeInfo->static_fields;
                        UVar13.fields.z = (pUVar8->downVector).fields.z * 9999.0;
                        UVar13.fields.y = (pUVar8->downVector).fields.y * 9999.0;
                        UVar13.fields.x = (pUVar8->downVector).fields.x * 9999.0;
                        UnityEngine_Transform__set_localPosition(pUVar6,UVar13,(MethodInfo *)0x0);
                        goto LAB_030f4828;
                      }
                    }
                  }
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


// ===== public static DBMPKPJGIPI get_NextScene()  [RVA 0x2FF4A10]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$get_NextScene @ RVA 0x2FF4A10

int32_t Nekki_SF2_GUI_Scenes_LoaderScreen__get_NextScene(MethodInfo *method)

{
  if ((DAT_04565a8a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a8a = 1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BJFGHDKLEKH;
}


// ===== private void Start()  [RVA 0x2FF4A68]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$Start @ RVA 0x2FF4A68

void Nekki_SF2_GUI_Scenes_LoaderScreen__Start
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o *x;
  
  if ((DAT_04565a8b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a8b = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045624ed == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_045624ed = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
    method = extraout_x1_02;
  }
  x = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Scenes_LoaderScreen__Init(__this,method_00);
    return;
  }
  return;
}


// ===== private void EEJGCKMLOAP(int OHLKNCPBCBL, LabelAlias EMAPNNFBNKF)  [RVA 0x2FF48F4]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$EEJGCKMLOAP @ RVA 0x2FF48F4

void Nekki_SF2_GUI_Scenes_LoaderScreen__EEJGCKMLOAP
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,int32_t OHLKNCPBCBL,
               Nekki_SF2_GUI_LabelAlias_o *EMAPNNFBNKF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04565a8c & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Count<GameUtils_IEKBEIOCOPO>__);
    FUN_01bab630(&StringLiteral_15858/*"^{0}^"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565a8c = 1;
  }
  (__this->fields).JNKNDDFEIAO = OHLKNCPBCBL;
  iVar2 = System_Linq_Enumerable__Count<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)
                     (__this->fields).JPOBFBBGOBC,
                     Method_System_Linq_Enumerable_Count<GameUtils_IEKBEIOCOPO>__);
  pSVar3 = StringLiteral_1/*""*/;
  if (0 < iVar2) {
    pSVar3 = Nekki_SF2_GUI_Scenes_LoaderScreen__MEJGJEGFCJF(__this,method_00);
    pSVar3 = System_String__Format(StringLiteral_15858/*"^{0}^"*/,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  }
  if (EMAPNNFBNKF != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(EMAPNNFBNKF,pSVar3,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)EMAPNNFBNKF,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (*(System_String_o **)&(EMAPNNFBNKF->fields)._useLabelLineSpacing,
                       (MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x030f4a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(EMAPNNFBNKF->klass->vtable)._37_Rebuild.methodPtr)
                (EMAPNNFBNKF,3,(EMAPNNFBNKF->klass->vtable)._37_Rebuild.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x2FF4B40]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$Init @ RVA 0x2FF4B40

void Nekki_SF2_GUI_Scenes_LoaderScreen__Init
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Scenes_LoaderScreen_o **ppNVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Object_o *target;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04565a8d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a8d = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b81 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565b81 = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
  }
  ppNVar1 = &Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
  ;
  *ppNVar1 = __this;
  thunk_FUN_01c20e04(ppNVar1,__this);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    target = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string MEJGJEGFCJF()  [RVA 0x2FF415C]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$MEJGJEGFCJF @ RVA 0x2FF415C

System_String_o *
Nekki_SF2_GUI_Scenes_LoaderScreen__MEJGJEGFCJF
          (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Func_TSource__bool__o *predicate;
  
                    /* try { // try from 030f415c to 031f415f has its CatchHandler @ 030f4160 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f415c with catch @ 030f4160
                       try { // try from 030f4160 to 031f417b has its CatchHandler @ 030f4108 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f4130 with catch @ 030f4164
                        */
                    /* try { // try from 030f417c to 031f4193 has its CatchHandler @ 030f4240 */
  if ((DAT_04565a8e & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Count<GameUtils_IEKBEIOCOPO>__);
                    /* try { // try from 030f4194 to 031f41af has its CatchHandler @ 030f4108 */
    FUN_01bab630(&Method_System_Linq_Enumerable_First<GameUtils_IEKBEIOCOPO>__);
    FUN_01bab630(&System_Func<GameUtils_IEKBEIOCOPO,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_LoaderScreen_IHIKEPPACNF_FMOGFCGICEL__);
                    /* try { // try from 030f41b0 to 031f41c7 has its CatchHandler @ 030f4240 */
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_IHIKEPPACNF_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
                    /* try { // try from 030f41c8 to 031f422f has its CatchHandler @ 030f4108 */
    FUN_01bab630(&Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_get_Item__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565a8e = 1;
  }
  iVar1 = System_Linq_Enumerable__Count<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)
                     (__this->fields).JPOBFBBGOBC,
                     Method_System_Linq_Enumerable_Count<GameUtils_IEKBEIOCOPO>__);
  if (0 < iVar1) {
    pIVar2 = (Il2CppObject *)
             thunk_FUN_01bda818(Nekki_SF2_GUI_Scenes_LoaderScreen_IHIKEPPACNF_TypeInfo);
    System_Object___ctor(pIVar2,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).JPOBFBBGOBC;
                    /* try { // try from 030f4230 to 031f423f has its CatchHandler @ 030f4240 */
                    /* catch() { ... } // from try @ 030f417c with catch @ 030f4240
                       catch() { ... } // from try @ 030f41b0 with catch @ 030f4240
                       catch() { ... } // from try @ 030f4230 with catch @ 030f4240 */
                    /* try { // try from 030f4244 to 031f4247 has its CatchHandler @ 030f4250 */
    if ((pSVar3 != (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,
                            (pSVar3->fields)._size + -1,
                            Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_get_Item__
                           ), pIVar4 != (Il2CppObject *)0x0)) {
                    /* try { // try from 030f4248 to 031f4253 has its CatchHandler @ 030f4108 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f4244 with catch @ 030f4250
                        */
      iVar1 = *(int32_t *)&pIVar4[2].monitor;
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
      }
      iVar1 = LIIFLGALGNK__HLMBDJOGONJ(0,iVar1,(MethodInfo *)0x0);
      if (pIVar2 != (Il2CppObject *)0x0) {
        *(int32_t *)&pIVar2[1].klass = iVar1;
        pSVar3 = (__this->fields).JPOBFBBGOBC;
        predicate = (System_Func_TSource__bool__o *)
                    thunk_FUN_01bda818(System_Func<GameUtils_IEKBEIOCOPO,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        pIVar2 = System_Linq_Enumerable__First<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,
                            Method_System_Linq_Enumerable_First<GameUtils_IEKBEIOCOPO>__);
        if (pIVar2 != (Il2CppObject *)0x0) {
          pIVar2 = pIVar2 + 1;
          goto LAB_030f42dc;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar2 = (Il2CppObject *)&StringLiteral_1/*""*/;
LAB_030f42dc:
  return (System_String_o *)pIVar2->klass;
}


// ===== public void SceneOpened(DBMPKPJGIPI AEHBGIIILDB)  [RVA 0x2FF4C3C]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$SceneOpened @ RVA 0x2FF4C3C

void Nekki_SF2_GUI_Scenes_LoaderScreen__SceneOpened
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,int32_t AEHBGIIILDB,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *method_00;
  ulong uVar4;
  int index;
  UnityEngine_Object_o *obj;
  ulong uVar5;
  UnityEngine_SceneManagement_Scene_Fields local_48 [2];
  
  if ((DAT_04565a8f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,AEHBGIIILDB);
    FUN_01bab630(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    DAT_04565a8f = 1;
  }
  index = 0;
  local_48[0].m_Handle = 0;
  (__this->fields).FAGMLMDNEHA = true;
  while( true ) {
    if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar1 = UnityEngine_SceneManagement_SceneManager__get_sceneCount((MethodInfo *)0x0);
    if ((int)(uVar1 - 1) <= index) break;
    if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_48[0].m_Handle =
         (int32_t)UnityEngine_SceneManagement_SceneManager__GetSceneAt(index,(MethodInfo *)0x0);
    iVar2 = UnityEngine_SceneManagement_Scene__get_buildIndex
                      ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_48,(MethodInfo *)0x0
                      );
    if (iVar2 != 1) {
      pUVar3 = UnityEngine_SceneManagement_Scene__GetRootGameObjects
                         ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_48,
                          (MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (0 < (int)pUVar3->max_length) {
        uVar5 = 0;
        uVar4 = pUVar3->max_length & 0xffffffff;
        do {
          if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          obj = (UnityEngine_Object_o *)pUVar3->m_Items[uVar5];
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
          uVar1 = (uint)pUVar3->max_length;
          uVar4 = (ulong)uVar1;
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)uVar1);
      }
    }
    index = index + 1;
  }
  Nekki_SF2_GUI_Scenes_LoaderScreen__IIDHABFCKGG
            ((Nekki_SF2_GUI_Scenes_LoaderScreen_o *)(ulong)uVar1,method_00);
  return;
}


// ===== private void MJBGODLMBGP()  [RVA 0x2FF4E4C]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$MJBGODLMBGP @ RVA 0x2FF4E4C

void Nekki_SF2_GUI_Scenes_LoaderScreen__MJBGODLMBGP
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Fight_VsScreen_o *pNVar1;
  
  pNVar1 = (__this->fields).PNGEFADJKCH;
  if ((pNVar1 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) &&
     (__this_00 = (pNVar1->fields).DALFPNPJBCO, __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
     ) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields).IHEIBDOIGAE = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x2FF4E80]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$Awake @ RVA 0x2FF4E80

void Nekki_SF2_GUI_Scenes_LoaderScreen__Awake
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a90 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_LoaderScreen_GJBIHHLINEG__);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04565a90 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Scenes_LoaderScreen__GJBIHHLINEG(__this,method);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  WideScreenController__add_UpdateEvent(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public void OnDestroy()  [RVA 0x2FF4FAC]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$OnDestroy @ RVA 0x2FF4FAC

void Nekki_SF2_GUI_Scenes_LoaderScreen__OnDestroy
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Scenes_LoaderScreen_o **ppNVar1;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04565a91 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_LoaderScreen_GJBIHHLINEG__);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
                    /* catch() { ... } // from try @ 030f5050 with catch @ 030f4ff4
                       catch() { ... } // from try @ 030f5088 with catch @ 030f4ff4
                       catch() { ... } // from try @ 030f50bc with catch @ 030f4ff4
                       catch() { ... } // from try @ 030f513c with catch @ 030f4ff4 */
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04565a91 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 030f5018 to 031f501f has its CatchHandler @ 030f5050 */
                    /* try { // try from 030f5020 to 031f503f has its CatchHandler @ 030f5058 */
  if (DAT_04565b81 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565b81 = '\x01';
    method = extraout_x1_01;
  }
                    /* try { // try from 030f504c to 031f504f has its CatchHandler @ 030f5054 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f5018 with catch @ 030f5050
                       try { // try from 030f5050 to 031f506f has its CatchHandler @ 030f4ff4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f504c with catch @ 030f5054
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f5020 with catch @ 030f5058
                        */
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
  }
  ppNVar1 = &Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
  ;
  *ppNVar1 = (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0;
                    /* try { // try from 030f5070 to 031f5087 has its CatchHandler @ 030f5134 */
  thunk_FUN_01c20e04(ppNVar1,0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 030f5088 to 031f50a3 has its CatchHandler @ 030f4ff4 */
  System_Action___ctor();
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 030f50a4 to 031f50bb has its CatchHandler @ 030f5134 */
  WideScreenController__remove_UpdateEvent(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x2FF50B8]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$.ctor @ RVA 0x2FF50B8

void Nekki_SF2_GUI_Scenes_LoaderScreen___ctor
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  CMAACCOMHBJ_o *__this_00;
  CMAACCOMHBJ_o **ppCVar1;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *__this_01;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 030f50bc to 031f5123 has its CatchHandler @ 030f4ff4 */
  if ((DAT_04565a92 & 1) == 0) {
    FUN_01bab630(&CMAACCOMHBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_TypeInfo);
    DAT_04565a92 = 1;
    method = extraout_x1;
  }
  (__this->fields).AHAMOAJILMO = true;
  (__this->fields).IHEIBDOIGAE = true;
                    /* try { // try from 030f5124 to 031f5133 has its CatchHandler @ 030f5134 */
  __this_00 = (CMAACCOMHBJ_o *)thunk_FUN_01bda818(CMAACCOMHBJ_TypeInfo,method);
  CMAACCOMHBJ___ctor(__this_00,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).FNCCNKDPDAB;
                    /* catch() { ... } // from try @ 030f5070 with catch @ 030f5134
                       catch() { ... } // from try @ 030f50a4 with catch @ 030f5134
                       catch() { ... } // from try @ 030f5124 with catch @ 030f5134 */
                    /* try { // try from 030f5138 to 031f513b has its CatchHandler @ 030f5144 */
  *ppCVar1 = __this_00;
                    /* try { // try from 030f513c to 031f5147 has its CatchHandler @ 030f4ff4 */
  thunk_FUN_01c20e04(ppCVar1,__this_00);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f5138 with catch @ 030f5144
                        */
  (__this->fields).PGOCNMLFPIJ = 1;
  (__this->fields).GIIFJPPGGON = 8;
  __this_01 = (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>__ctor__);
  ppSVar2 = &(__this->fields).JPOBFBBGOBC;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void IIDHABFCKGG()  [RVA 0x2FF4D88]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$IIDHABFCKGG @ RVA 0x2FF4D88

void Nekki_SF2_GUI_Scenes_LoaderScreen__IIDHABFCKGG
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  KMBNFNCDDBP_o *pKVar2;
  
  if ((DAT_04565a93 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04565a93 = 1;
  }
  iVar1 = UnityEngine_SystemInfo__get_systemMemorySize((MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar2 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (pKVar2 != (KMBNFNCDDBP_o *)0x0) {
    if (iVar1 < (pKVar2->fields).JJIGNBIMLCC) {
      UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
      UnityEngine_ResourcesAndBundles__GCCollectImmediately((MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FNOJFNCGHHJ()  [RVA 0x2FF518C]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$FNOJFNCGHHJ @ RVA 0x2FF518C

void Nekki_SF2_GUI_Scenes_LoaderScreen__FNOJFNCGHHJ
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o **ppNVar2;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o *pNVar3;
  
  if ((DAT_04565a94 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a94 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).LIDCNGFPOOI;
  pNVar3 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = *ppNVar2;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar3->fields)._BOGAKJOFOEK_k__BackingField == false) {
      Util__ONIDAJMNLHG((UnityEngine_MonoBehaviour_o *)pNVar3,false,(MethodInfo *)0x0);
    }
  }
  (__this->fields).LIDCNGFPOOI = (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  Nekki_SF2_GUI_Scenes_LoaderScreen__DKNNDNIGMIM(__this,method_00);
  return;
}


// ===== public static DBMPKPJGIPI get_PrevScene()  [RVA 0x2FF5234]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$get_PrevScene @ RVA 0x2FF5234

int32_t Nekki_SF2_GUI_Scenes_LoaderScreen__get_PrevScene(MethodInfo *method)

{
  if ((DAT_04565a95 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a95 = 1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BGDMCNDAIDC;
}


// ===== private void GJBIHHLINEG()  [RVA 0x2FF4F2C]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$GJBIHHLINEG @ RVA 0x2FF4F2C

void Nekki_SF2_GUI_Scenes_LoaderScreen__GJBIHHLINEG
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  bool value;
  MethodInfo *extraout_x1;
  UnityEngine_UI_RectMask2D_o *__this_00;
  UnityEngine_RectTransform_o *JNPCENEINON;
  
  if ((DAT_04565a96 & 1) == 0) {
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04565a96 = 1;
    method = extraout_x1;
  }
  JNPCENEINON = (__this->fields)._MountRoot;
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(WideScreenController_TypeInfo,method);
  }
  WideScreenController__RunCustom(JNPCENEINON,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._MountMaskRoot;
  value = WideScreenController__ShouldRenderBorders((MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,value,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x2FF528C]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$.cctor @ RVA 0x2FF528C

void Nekki_SF2_GUI_Scenes_LoaderScreen___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Scenes_LoaderScreen_c *pNVar1;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o **ppNVar2;
  Nekki_SF2_GUI_Scenes_LoaderScreen_StaticFields *pNVar3;
  
  if ((DAT_04565a97 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a97 = 1;
  }
  Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG =
       (UnityEngine_Coroutine_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields,0);
  pNVar1 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
  pNVar3 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields;
  pNVar3->BGDMCNDAIDC = 0xb;
  pNVar3->BJFGHDKLEKH = 0xb;
  if (DAT_04565b81 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565b81 = '\x01';
    pNVar1 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
  }
  if ((pNVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pNVar1 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
  }
  ppNVar2 = &pNVar1->static_fields->_JPDNDPEAJAL_k__BackingField;
  *ppNVar2 = (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  return;
}


// ===== public static void set_NextScene(DBMPKPJGIPI CJNHFNHJHPE)  [RVA 0x2FF5330]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$set_NextScene @ RVA 0x2FF5330

void Nekki_SF2_GUI_Scenes_LoaderScreen__set_NextScene(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a98 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a98 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
  }
  Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BJFGHDKLEKH = CJNHFNHJHPE;
  return;
}


// ===== public void SceneInited(DBMPKPJGIPI AEHBGIIILDB)  [RVA 0x2FF538C]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$SceneInited @ RVA 0x2FF538C

void Nekki_SF2_GUI_Scenes_LoaderScreen__SceneInited
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,int32_t AEHBGIIILDB,MethodInfo *method)

{
  (__this->fields).DIKILJAKEOG = true;
  if (AEHBGIIILDB == 6) {
    return;
  }
  Nekki_SF2_GUI_Scenes_LoaderScreen__NEJJBIDOKGN(__this,(MethodInfo *)(ulong)(uint)AEHBGIIILDB);
  return;
}


// ===== private void DKNNDNIGMIM()  [RVA 0x2FF3F1C]
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
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_get_Item__);
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
                            Method_System_Collections_Generic_List<ModelParameters>_get_Item__);
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


// ===== private void ODFHMBHFNJB()  [RVA 0x2FF53A4]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$ODFHMBHFNJB @ RVA 0x2FF53A4

void Nekki_SF2_GUI_Scenes_LoaderScreen__ODFHMBHFNJB
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  FightList_o *pAVar1;
  System_String_o *HHMEIAPHDCI;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04565a9a & 1) == 0) {
    FUN_01bab630(&MFIKGMIDDIG_TypeInfo);
    auVar2 = FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565a9a = 1;
  }
  pAVar1 = (__this->fields).FMPFMKFODMP;
  if (pAVar1 != (FightList_o *)0x0) {
    HHMEIAPHDCI = (pAVar1->fields).GLDHKALMIBD;
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__ODFHMBHFNJB(HHMEIAPHDCI,true,(MethodInfo *)0x0);
    MFIKGMIDDIG_TypeInfo->static_fields->NHGIAGMKJKG = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public static void set_PrevScene(DBMPKPJGIPI CJNHFNHJHPE)  [RVA 0x2FF5434]
// Nekki.SF2.GUI.Scenes.LoaderScreen$$set_PrevScene @ RVA 0x2FF5434

void Nekki_SF2_GUI_Scenes_LoaderScreen__set_PrevScene(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a9b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a9b = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
  }
  Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BGDMCNDAIDC = CJNHFNHJHPE;
  return;
}

