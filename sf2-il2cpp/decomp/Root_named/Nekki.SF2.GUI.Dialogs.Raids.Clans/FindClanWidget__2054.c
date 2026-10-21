// TypeDefIndex 2054
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class FindClanWidget : MonoBehaviour
// Fields:
//   private readonly Color JNJBMAJKGKF; // 0x20
//   private EditBox _editBoxForClanName; // 0x30
//   private LabelButton _searchButton; // 0x38
//   private LabelAlias _invalidInputDataLabel; // 0x40
//   private LabelAlias _listLabel; // 0x48
//   private LabelAlias _resultLabel; // 0x50
//   private FindClanTable _tableClans; // 0x58
//   private FindClanCell _cellPrefab; // 0x60
//   private SimpleScroll _scroll; // 0x68
//   private bool <BOGAKJOFOEK>k__BackingField; // 0x70
//   private CPAPMBPHEAB DIAFKBHLFLD; // 0x74
//   private FindClanWidget.ACADJOFDICO GGBLLCCFOPE; // 0x78
//   private IEnumerator DEJIFBFIMNN; // 0x80
//   private const float GAHACJKAHAE = 0.01;
//   private const float DFIIJCJFGIC = 0.7;

// ===== private void OnDestroy()  [RVA 0x32B5520]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$OnDestroy @ RVA 0x32B5520

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  KCJMBDCBIIF_o *pKVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456744c & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<DLOALGNBPNL>_OHDOIFLJMMF__);
    DAT_0456744c = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__GDFJKOKNLNO(__this,method);
  pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar1 != (SFRequestSender_o *)0x0) {
    (*(pKVar1->klass->vtable)._9_IKAAFAICDMD.methodPtr)
              (pKVar1,__this,(pKVar1->klass->vtable)._9_IKAAFAICDMD.method);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar2 = HJPEKDOPBHN__ODLPHDBFGPL((MethodInfo *)0x0);
    if (pKVar2 != (KCJMBDCBIIF_o *)0x0) {
      JICOLGELJGE<object>__OHDOIFLJMMF
                ((JICOLGELJGE_T__o *)pKVar2,(Il2CppObject *)__this,
                 Method_JICOLGELJGE<DLOALGNBPNL>_OHDOIFLJMMF__);
      pKVar2 = HJPEKDOPBHN__ODLPHDBFGPL((MethodInfo *)0x0);
      if (pKVar2 != (KCJMBDCBIIF_o *)0x0) {
        (*(pKVar2->klass->vtable)._4_BOADOENMDDN.methodPtr)
                  (pKVar2,(pKVar2->klass->vtable)._4_BOADOENMDDN.method);
        (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32B56A8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$.ctor @ RVA 0x32B56A8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  
  UVar1 = CFBGPBCDAGA__NFFPCFGDOKG(0xf4,0xf1,0xcc,0xff,(MethodInfo *)0x0);
  (__this->fields).JNJBMAJKGKF.fields.r = UVar1.fields.r;
  (__this->fields).JNJBMAJKGKF.fields.g = UVar1.fields.g;
  (__this->fields).JNJBMAJKGKF.fields.b = UVar1.fields.b;
  (__this->fields).JNJBMAJKGKF.fields.a = UVar1.fields.a;
  (__this->fields).GGBLLCCFOPE = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void FNMNFEGFOEK()  [RVA 0x32B56E8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$FNMNFEGFOEK @ RVA 0x32B56E8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__FNMNFEGFOEK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_Scripts_EditBox_o *__this_00;
  
  __this_00 = (__this->fields)._editBoxForClanName;
  if ((__this_00 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
     (pSVar1 = (__this_00->fields).super.m_Text, pSVar1 != (System_String_o *)0x0)) {
    pSVar1 = System_String__Trim(pSVar1,(MethodInfo *)0x0);
    UnityEngine_UI_InputField__set_text
              ((UnityEngine_UI_InputField_o *)__this_00,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FHGHCEKLLOK(string IMMNELPBGIF)  [RVA 0x32B571C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$FHGHCEKLLOK @ RVA 0x32B571C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__FHGHCEKLLOK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,
               System_String_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar2;
  
  pNVar2 = (__this->fields)._editBoxForClanName;
  if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    bVar1 = PCOEHCPGBBG__KCDAEMMGHNM((pNVar2->fields).super.m_Text,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MPNLJKCHCKP(__this,~(uint)bVar1 & 1,method);
    pNVar2 = (__this->fields)._editBoxForClanName;
    if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
      value = PCOEHCPGBBG__OCJBAFGNLIE((pNVar2->fields).super.m_Text,(MethodInfo *)0x0);
      UnityEngine_UI_InputField__set_text
                ((UnityEngine_UI_InputField_o *)pNVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EOOPHGBLFMI(DLOALGNBPNL PIMBGGLBFAA)  [RVA 0x32B5890]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$EOOPHGBLFMI @ RVA 0x32B5890

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__EOOPHGBLFMI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,
               DLOALGNBPNL_o *PIMBGGLBFAA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *pNVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_0456744d & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<CBPENMDOJDB>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456744d = 1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField == false) {
    pNVar2 = (__this->fields)._tableClans;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._tableClans;
      if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *)0x0) goto LAB_033b59a0;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__SetClansInfo
                (pNVar2,PIMBGGLBFAA,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields)._resultLabel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._resultLabel;
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         PIMBGGLBFAA != (DLOALGNBPNL_o *)0x0)) {
        bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_IList_T__o *)
                           (PIMBGGLBFAA->fields).EHBNKDHKJNI,
                           Method_DJNBJHPDKDP_OBECCOPBADO<CBPENMDOJDB>__);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_00,bVar1,(MethodInfo *)0x0);
          return;
        }
      }
LAB_033b59a0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 033b5998 to 034b5b17 has its CatchHandler @ 033b5998
                       catch() { ... } // from try @ 033b5998 with catch @ 033b5998
                       catch() { ... } // from try @ 033b5b50 with catch @ 033b5998
                       catch() { ... } // from try @ 033b5c64 with catch @ 033b5998
                       catch() { ... } // from try @ 033b5ca4 with catch @ 033b5998
                       catch() { ... } // from try @ 033b5d8c with catch @ 033b5998 */
  return;
}


// ===== private void GCGMACNOCJA(bool CJNHFNHJHPE)  [RVA 0x32B59A4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$GCGMACNOCJA @ RVA 0x32B59A4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__GCGMACNOCJA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._BOGAKJOFOEK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void IDFJAAEDKDI()  [RVA 0x32B59B0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$IDFJAAEDKDI @ RVA 0x32B59B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__IDFJAAEDKDI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar2;
  UnityEngine_Events_UnityAction_T0__o *call_00;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  LabelButton_o *pLVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_01;
  
  if ((DAT_0456744e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_FHGHCEKLLOK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_MHCAHALNKHG__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<string>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    DAT_0456744e = 1;
    method = extraout_x1;
  }
  pLVar6 = (__this->fields)._searchButton;
  if (pLVar6 != (LabelButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pLVar6->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._editBoxForClanName;
      if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
        Nekki_SF2_GUI_Scripts_EditBox__set_BGColor
                  (pNVar2,(UnityEngine_Color_o)(__this->fields).JNJBMAJKGKF.fields,(MethodInfo *)0x0
                  );
        pNVar2 = (__this->fields)._editBoxForClanName;
        if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
          __this_01 = (pNVar2->fields).super.m_OnValueChanged;
          call_00 = (UnityEngine_Events_UnityAction_T0__o *)
                    thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
          UnityEngine_Events_UnityAction<object>___ctor();
          if (__this_01 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent<object>__AddListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call_00,
                       Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
            Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__GDFJKOKNLNO(__this,method_00);
            pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
            pSVar4 = Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__ALELNBEJFPD(__this,method_01)
            ;
            if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
              pPVar7 = pPVar3->klass;
              uVar1._0_1_ = (pPVar7->_2).rank;
              uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
              uVar8 = (ulong)uVar1;
              if (uVar8 != 0) {
                piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
                do {
                    /* try { // try from 033b5b18 to 034b5b3f has its CatchHandler @ 033b5c74 */
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                      (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 033b5b40 to 034b5b4f has its CatchHandler @ 033b5c6c */
                    pVVar5 = pPVar7->vtable + *piVar9;
                    goto LAB_033b5b48;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_033b5b48:
                    /* try { // try from 033b5b50 to 034b5c5f has its CatchHandler @ 033b5998 */
              pSVar4 = (System_Collections_IEnumerator_o *)
                       (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
              ppSVar10 = &(__this->fields).DEJIFBFIMNN;
              *ppSVar10 = pSVar4;
              thunk_FUN_01c20e04(ppSVar10,pSVar4);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GDFJKOKNLNO()  [RVA 0x32B55E4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$GDFJKOKNLNO @ RVA 0x32B55E4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__GDFJKOKNLNO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456744f & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456744f = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).DEJIFBFIMNN;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_033b567c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_033b567c:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void MHCAHALNKHG()  [RVA 0x32B5BE4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$MHCAHALNKHG @ RVA 0x32B5BE4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MHCAHALNKHG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  bool bVar1;
  RaidClansManager_o *__this_00;
  System_Action_KEFHDOHHHML__o *LPAJOAAAFGH;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_04567450 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_DJHCNNLCEMN__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567450 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__FNMNFEGFOEK(__this,method);
  pNVar2 = (__this->fields)._editBoxForClanName;
  if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pNVar2->fields).super.m_Text,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 033b5c60 to 034b5c63 has its CatchHandler @ 033b5c70 */
                    /* try { // try from 033b5c64 to 034b5c8b has its CatchHandler @ 033b5998 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b5b40 with catch @ 033b5c6c
                        */
      Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MPNLJKCHCKP(__this,3,in_x2);
      return;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b5c60 with catch @ 033b5c70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b5b18 with catch @ 033b5c74
                        */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033b5c8c to 034b5ca3 has its CatchHandler @ 033b5d84 */
    __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    pNVar2 = (__this->fields)._editBoxForClanName;
    if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
      KGLJICLJHEL = (pNVar2->fields).super.m_Text;
                    /* try { // try from 033b5ca4 to 034b5d73 has its CatchHandler @ 033b5998 */
      LPAJOAAAFGH = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (RaidClansManager_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        RaidClansManager__NFLCHIPCOMI(__this_00,KGLJICLJHEL,false,LPAJOAAAFGH,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MIGKOMENMKP(__this,1,method_00);
        pNVar3 = (__this->fields)._resultLabel;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar3 = (__this->fields)._resultLabel;
        if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool GGHNMDPIAAK(string EHNFGMGKCHO)  [RVA 0x32B5774]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$GGHNMDPIAAK @ RVA 0x32B5774

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__GGHNMDPIAAK
               (System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = PCOEHCPGBBG__KCDAEMMGHNM(EHNFGMGKCHO,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void SearchRecommended()  [RVA 0x32B5DF8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$SearchRecommended @ RVA 0x32B5DF8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__SearchRecommended
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  System_Action_KEFHDOHHHML__o *LPAJOAAAFGH;
  MethodInfo *in_x2;
  
  if ((DAT_04567451 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_DJHCNNLCEMN__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567451 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MIGKOMENMKP(__this,0,in_x2);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  LPAJOAAAFGH = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (RaidClansManager_o *)0x0) {
    RaidClansManager__NFLCHIPCOMI(__this_00,StringLiteral_1/*""*/,true,LPAJOAAAFGH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HAELHKAHJKI()  [RVA 0x32B5EE0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$HAELHKAHJKI @ RVA 0x32B5EE0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__HAELHKAHJKI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MIGKOMENMKP
            (__this,(__this->fields).GGBLLCCFOPE,in_x2);
  return;
}


// ===== public RectTransform get_RectTransform()  [RVA 0x32B5EE8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$get_RectTransform @ RVA 0x32B5EE8

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__get_RectTransform
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04567452 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567452 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}


// ===== public bool get_IsDestroyed()  [RVA 0x32B5F48]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$get_IsDestroyed @ RVA 0x32B5F48

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__get_IsDestroyed
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  return (__this->fields)._BOGAKJOFOEK_k__BackingField;
}


// ===== private static string IDCCEMKLCGF(string EHNFGMGKCHO)  [RVA 0x32B5888]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$IDCCEMKLCGF @ RVA 0x32B5888

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__IDCCEMKLCGF
          (System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = PCOEHCPGBBG__OCJBAFGNLIE(EHNFGMGKCHO,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private IEnumerator ALELNBEJFPD()  [RVA 0x32B5B78]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$ALELNBEJFPD @ RVA 0x32B5B78

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__ALELNBEJFPD
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567453 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM_TypeInfo);
    DAT_04567453 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM_TypeInfo
                                 ,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void MPNLJKCHCKP(CPAPMBPHEAB LHPGDPKKMPF)  [RVA 0x32B577C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$MPNLJKCHCKP @ RVA 0x32B577C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MPNLJKCHCKP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,int32_t LHPGDPKKMPF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  undefined8 *puVar3;
  
  if ((DAT_04567454 & 1) == 0) {
    FUN_01bab630(&StringLiteral_17058/*"clan_warningtext_latin"*/);
    FUN_01bab630(&StringLiteral_17785/*"dlgEnterClanName"*/);
    DAT_04567454 = 1;
  }
  if ((__this->fields).DIAFKBHLFLD == LHPGDPKKMPF) {
    return;
  }
  (__this->fields).DIAFKBHLFLD = LHPGDPKKMPF;
  if (LHPGDPKKMPF == 3) {
    pNVar1 = (__this->fields)._invalidInputDataLabel;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._invalidInputDataLabel;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        puVar3 = &StringLiteral_17785/*"dlgEnterClanName"*/;
LAB_033b5848:
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,(System_String_o *)*puVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (LHPGDPKKMPF == 1) {
    pNVar1 = (__this->fields)._invalidInputDataLabel;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._invalidInputDataLabel;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        puVar3 = &StringLiteral_17058/*"clan_warningtext_latin"*/;
        goto LAB_033b5848;
      }
    }
  }
  else {
    pNVar1 = (__this->fields)._invalidInputDataLabel;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MIGKOMENMKP(FindClanWidget.ACADJOFDICO MNPKIDDPNBM)  [RVA 0x32B5D64]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$MIGKOMENMKP @ RVA 0x32B5D64

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MIGKOMENMKP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,int32_t MNPKIDDPNBM,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  undefined8 *puVar1;
  
                    /* try { // try from 033b5d74 to 034b5d83 has its CatchHandler @ 033b5d84 */
  if ((DAT_04567455 & 1) == 0) {
                    /* catch() { ... } // from try @ 033b5c8c with catch @ 033b5d84
                       catch() { ... } // from try @ 033b5d74 with catch @ 033b5d84 */
                    /* try { // try from 033b5d88 to 034b5d8b has its CatchHandler @ 033b5d94 */
    FUN_01bab630(&StringLiteral_4410/*"ClanRecommend"*/);
                    /* try { // try from 033b5d8c to 034b5d97 has its CatchHandler @ 033b5998 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b5d88 with catch @ 033b5d94
                        */
    FUN_01bab630(&StringLiteral_11756/*"SearchResults"*/);
    DAT_04567455 = 1;
  }
  (__this->fields).GGBLLCCFOPE = MNPKIDDPNBM;
  if (MNPKIDDPNBM == 1) {
    __this_00 = (__this->fields)._listLabel;
    if (__this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033b5df4;
    puVar1 = &StringLiteral_11756/*"SearchResults"*/;
  }
  else {
    if (MNPKIDDPNBM != 0) {
      return;
    }
    __this_00 = (__this->fields)._listLabel;
    if (__this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
LAB_033b5df4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    puVar1 = &StringLiteral_4410/*"ClanRecommend"*/;
  }
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  return;
}


// ===== private void DJHCNNLCEMN(KEFHDOHHHML IMMNELPBGIF)  [RVA 0x32B5F78]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$DJHCNNLCEMN @ RVA 0x32B5F78

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__DJHCNNLCEMN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,
               KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  OJKCDJCBOBL_o *DBIAAJNKHLH;
  KCJMBDCBIIF_o *__this_00;
  System_Action_DLOALGNBPNL__o *BLMFLPJJMPF;
  
  if ((DAT_04567456 & 1) == 0) {
    FUN_01bab630(&System_Action<DLOALGNBPNL>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_EOOPHGBLFMI__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJKCDJCBOBL>__);
    DAT_04567456 = 1;
  }
  if (((IMMNELPBGIF == (KEFHDOHHHML_o *)0x0) ||
      (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IMMNELPBGIF,(MethodInfo *)0x0), !bVar1)) ||
     ((__this->fields)._BOGAKJOFOEK_k__BackingField != false)) {
    return;
  }
  DBIAAJNKHLH = (OJKCDJCBOBL_o *)
                KEFHDOHHHML__PFNEPJAFEDF<object>
                          (IMMNELPBGIF,Method_KEFHDOHHHML_PFNEPJAFEDF<OJKCDJCBOBL>__);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this_00 = HJPEKDOPBHN__ODLPHDBFGPL((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_DLOALGNBPNL__o *)
                thunk_FUN_01bda818(System_Action<DLOALGNBPNL>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (KCJMBDCBIIF_o *)0x0) {
    KCJMBDCBIIF__DAGCABNOONJ(__this_00,DBIAAJNKHLH,BLMFLPJJMPF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x32B6094]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$Init @ RVA 0x32B6094

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__GDFJKOKNLNO(__this,method);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__IDFJAAEDKDI(__this,method_00);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MIGKOMENMKP
            (__this,(__this->fields).GGBLLCCFOPE,in_x2);
  __this_00 = (__this->fields)._tableClans;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__Init
              (__this_00,(__this->fields)._scroll,(__this->fields)._cellPrefab,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

