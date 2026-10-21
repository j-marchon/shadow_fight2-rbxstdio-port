// TypeDefIndex 1714
// Namespace: 
// public class WideController : MonoBehaviour
// Fields:
//   private GameObject _Wide; // 0x20
//   private GameObject _NotWide; // 0x28
//   private Text[] _userIds; // 0x30
//   private IEnumerator OMBLNNEAHLD; // 0x38

// ===== private IEnumerator MDEBIDCIMAN()  [RVA 0x31D5EBC]
// WideController$$MDEBIDCIMAN @ RVA 0x31D5EBC

System_Collections_IEnumerator_o *
WideController__MDEBIDCIMAN(WideController_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ce3 & 1) == 0) {
    FUN_01bab630(&WideController_GAFEBNNJNDO_TypeInfo);
    DAT_04566ce3 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(WideController_GAFEBNNJNDO_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private static void OBJNGNDMDCL(Text EHNFGMGKCHO, string OGPGLGPMEPD)  [RVA 0x31D5F50]
// WideController$$OBJNGNDMDCL @ RVA 0x31D5F50

void WideController__OBJNGNDMDCL
               (UnityEngine_UI_Text_o *EHNFGMGKCHO,System_String_o *OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04566ce4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_14641/*"UserID: "*/);
    DAT_04566ce4 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)EHNFGMGKCHO,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(OGPGLGPMEPD,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)(ulong)bVar1;
  pSVar3 = StringLiteral_1/*""*/;
  if (!bVar1) {
    pSVar2 = System_String__Concat(StringLiteral_14641/*"UserID: "*/,OGPGLGPMEPD,(MethodInfo *)0x0);
    pSVar3 = pSVar2;
  }
  if (EHNFGMGKCHO == (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(pSVar2,pSVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x032d6034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(EHNFGMGKCHO->klass->vtable)._75_set_text.methodPtr)
            (EHNFGMGKCHO,pSVar3,(EHNFGMGKCHO->klass->vtable)._75_set_text.method);
  return;
}


// ===== private void Awake()  [RVA 0x31D603C]
// WideController$$Awake @ RVA 0x31D603C

void WideController__Awake(WideController_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  int32_t iVar3;
  PBAKFOBIHEG_o *pPVar4;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  bool value;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar7;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_IEnumerator_o **ppSVar11;
  
  if ((DAT_04566ce5 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566ce5 = 1;
  }
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pUVar7 = (__this->fields)._NotWide;
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    if (1.7753906 <= (float)iVar2 / (float)iVar3) {
      UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._Wide;
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_032d6180;
      value = true;
    }
    else {
      UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._Wide;
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_032d6180;
      value = false;
    }
    UnityEngine_GameObject__SetActive(pUVar7,value,(MethodInfo *)0x0);
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar5 = WideController__MDEBIDCIMAN(__this,method_00);
    if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
      pPVar8 = pPVar4->klass;
      uVar1._0_1_ = (pPVar8->_2).rank;
      uVar1._1_1_ = (pPVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar6 = pPVar8->vtable + *piVar10;
            goto LAB_032d6154;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_032d6154:
      pSVar5 = (System_Collections_IEnumerator_o *)
               (*pVVar6->methodPtr)(pPVar4,pSVar5,1,pVVar6->method);
      ppSVar11 = &(__this->fields).OMBLNNEAHLD;
      *ppSVar11 = pSVar5;
      thunk_FUN_01c20e04(ppSVar11,pSVar5);
      return;
    }
  }
LAB_032d6180:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x31D6184]
// WideController$$OnDestroy @ RVA 0x31D6184

void WideController__OnDestroy(WideController_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o *pSVar7;
  
  if ((DAT_04566ce6 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Util_TypeInfo);
    DAT_04566ce6 = 1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar7 = (__this->fields).OMBLNNEAHLD;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_032d624c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_032d624c:
                    /* WARNING: Could not recover jumptable at 0x032d6260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pPVar2,pSVar7,pVVar3->method);
  return;
}


// ===== public GameObject get_CurrentActive()  [RVA 0x31D6268]
// WideController$$get_CurrentActive @ RVA 0x31D6268

UnityEngine_GameObject_o *
WideController__get_CurrentActive(WideController_o *__this,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = (__this->fields)._Wide;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    lVar1 = 0x20;
    if (!bVar2) {
      lVar1 = 0x28;
    }
    return *(UnityEngine_GameObject_o **)((long)&__this->klass + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31D62A0]
// WideController$$.ctor @ RVA 0x31D62A0

void WideController___ctor(WideController_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

