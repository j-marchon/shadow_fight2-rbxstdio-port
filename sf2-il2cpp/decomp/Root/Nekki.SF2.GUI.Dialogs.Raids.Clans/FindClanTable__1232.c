// TypeDefIndex 1232
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class FindClanTable : MonoBehaviour
// Fields:
//   private SimpleScroll PDHMLFAMNCO; // 0x20
//   private DLOALGNBPNL DGGLBIIIEBM; // 0x28
//   private FindClanCell KFCHMBGIPJK; // 0x30
//   private IEnumerator CLLBGHPLGNH; // 0x38
//   private const string FDDFFMLLCDE = "FindClanCellPool";

// ===== private void DNNPDIPCCEN()  [RVA 0x313AD7C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$DNNPDIPCCEN @ RVA 0x313AD7C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__DNNPDIPCCEN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04566726 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566726 = 1;
  }
  ppSVar7 = &(__this->fields).CLLBGHPLGNH;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0323ae28;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0323ae28:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== public void .ctor()  [RVA 0x313AE54]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$.ctor @ RVA 0x313AE54

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NCDOMAGEGCF()  [RVA 0x313AE5C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$NCDOMAGEGCF @ RVA 0x313AE5C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__NCDOMAGEGCF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  
  if ((DAT_04566727 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566727 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    __this_01 = (__this->fields).PDHMLFAMNCO;
    if (__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ClearData(__this_01,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__DNNPDIPCCEN(__this,method_00);
      pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
      pSVar4 = Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__MHNONHHOHGN(__this,method_01);
      if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
        pPVar6 = pPVar3->klass;
        uVar1._0_1_ = (pPVar6->_2).rank;
        uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar1;
        if (uVar7 != 0) {
          piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar5 = pPVar6->vtable + *piVar8;
              goto LAB_0323af38;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_0323af38:
        pSVar4 = (System_Collections_IEnumerator_o *)
                 (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
        ppSVar9 = &(__this->fields).CLLBGHPLGNH;
        *ppSVar9 = pSVar4;
        thunk_FUN_01c20e04(ppSVar9,pSVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator MHNONHHOHGN()  [RVA 0x313AF68]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$MHNONHHOHGN @ RVA 0x313AF68

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__MHNONHHOHGN
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566728 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_COHEJNJBHAI_TypeInfo);
    DAT_04566728 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_COHEJNJBHAI_TypeInfo
                                 ,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void Init(SimpleScroll MGFBPKIBNJI, FindClanCell GEFKGPIDOGL)  [RVA 0x313AFFC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$Init @ RVA 0x313AFFC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *GEFKGPIDOGL,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o **ppNVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar2;
  
  if ((DAT_04566729 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<BaseScrollItem>__);
    FUN_01bab630(&StringLiteral_6436/*"FindClanCellPool"*/);
    DAT_04566729 = 1;
  }
  ppNVar2 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar2 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar2,MGFBPKIBNJI);
  ppNVar1 = &(__this->fields).KFCHMBGIPJK;
  *ppNVar1 = GEFKGPIDOGL;
  thunk_FUN_01c20e04(ppNVar1,GEFKGPIDOGL);
  if (*ppNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(*ppNVar2,(MethodInfo *)0x0);
    if (*ppNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *)0x0) {
      __this_00 = *ppNVar2;
      DKIDCBPNMPD = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)*ppNVar1,
                               Method_UnityEngine_Component_GetComponent<BaseScrollItem>__);
      if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                  (__this_00,StringLiteral_6436/*"FindClanCellPool"*/,DKIDCBPNMPD,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x313B0C0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$OnDestroy @ RVA 0x313B0C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__DNNPDIPCCEN(__this,method);
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetClansInfo(DLOALGNBPNL IKJFEMIELGK)  [RVA 0x313B0E4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$SetClansInfo @ RVA 0x313B0E4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__SetClansInfo
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,DLOALGNBPNL_o *IKJFEMIELGK
               ,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).DGGLBIIIEBM = IKJFEMIELGK;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__NCDOMAGEGCF(__this,method_00);
  return;
}

