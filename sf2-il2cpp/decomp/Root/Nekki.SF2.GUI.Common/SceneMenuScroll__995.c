// TypeDefIndex 995
// Namespace: Nekki.SF2.GUI.Common
// public class SceneMenuScroll : UIModule
// Fields:
//   private RectTransform _Scroll; // 0x28
//   private RectTransform _RollLeft; // 0x30
//   private RectTransform _RollRight; // 0x38
//   private RectTransform _SceneSelectorsParent; // 0x40
//   private GameObject _SceneSelectorPrefab; // 0x48
//   private float _AnimationDuration; // 0x50
//   private Ease _AnimationEase; // 0x54
//   private SceneMenuScroll.ENOALDKHIOF _OnStateChanged; // 0x58
//   private static SceneMenuScroll CNMHHKAMGPI; // 0x0
//   private List<DBMPKPJGIPI> BNLLNJDLGJB; // 0x60
//   private List<SceneSelector> FGIFPAPGJJN; // 0x68
//   private SceneSelector NFFFEDGMBIL; // 0x70
//   private Vector2 JCJGBLBKEID; // 0x78
//   private Vector2 JNJNEIDIPEM; // 0x80
//   private SceneMenuScroll.LJJIFKBBPFG IAAABJBDEMK; // 0x88
//   private SceneMenuScroll.HGHBDLEIEPP GLDOIEEOPCB; // 0x8C

// ===== private void GKHAKLDEIJI(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x30BB4FC]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$GKHAKLDEIJI @ RVA 0x30BB4FC

void Nekki_SF2_GUI_Common_SceneMenuScroll__GKHAKLDEIJI
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)OPHMGAKOJLP;
  if (AAJGEHHPMGH == 0x16) {
    bVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll__MNKFDLHJPAA(__this,0,method_00);
    if (!bVar1) {
      EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
      JJPNLEPEAFM__AGMHOCPINKD((MethodInfo *)0x0);
      return;
    }
  }
  else if ((AAJGEHHPMGH == 0x17) &&
          (bVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll__MNKFDLHJPAA(__this,1,method_00), !bVar1)) {
    EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Common_SceneMenuScroll__Open(__this,0,method_00);
    return;
  }
  return;
}


// ===== public SceneMenuScroll.HGHBDLEIEPP get_CurrentMode()  [RVA 0x30BB750]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$get_CurrentMode @ RVA 0x30BB750

int32_t Nekki_SF2_GUI_Common_SceneMenuScroll__get_CurrentMode
                  (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  return (__this->fields).GLDOIEEOPCB;
}


// ===== private void MAFEFPMGALF()  [RVA 0x30BB758]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$MAFEFPMGALF @ RVA 0x30BB758

void Nekki_SF2_GUI_Common_SceneMenuScroll__MAFEFPMGALF
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_GameController_o *__this_01;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  System_Enum_o *pSVar3;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_02;
  FCJBEKHDLAF_o *pFVar4;
  OCOAGJDCJPL_o *__this_03;
  JPGJLKENNCC_o *__this_04;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_04566241 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_BEMFAFLLOLP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_GDFABJELKAN__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    DAT_04566241 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_031bb9f0;
  UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO != (FCJBEKHDLAF_o *)0x0) {
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar4 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if (pFVar4 == (FCJBEKHDLAF_o *)0x0) goto LAB_031bb9f0;
    (pFVar4->fields).MDJMIPGAJLL = true;
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    __this_01 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if (__this_01 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) goto LAB_031bb9f0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,false,(MethodInfo *)0x0)
    ;
  }
  ENCPFKDEPJB__CCOOIIPKJNI(1,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_03 = (pNVar1->fields).KIHMKIEFOEI;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    local_34 = 1;
    pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
    if (__this_03 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_03,pSVar2,pSVar3,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_04 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        local_38 = 1;
        pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
        if (__this_04 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_04,pSVar2,pSVar3,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
          __this_02 = (__this->fields)._OnStateChanged;
          (__this->fields).IAAABJBDEMK = 0;
          if (__this_02 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
            UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,0,
                       Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
            return;
          }
        }
      }
    }
  }
LAB_031bb9f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static SceneMenuScroll get_Current()  [RVA 0x30BB9F4]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$get_Current @ RVA 0x30BB9F4

Nekki_SF2_GUI_Common_SceneMenuScroll_o *
Nekki_SF2_GUI_Common_SceneMenuScroll__get_Current(MethodInfo *method)

{
  if ((DAT_04566242 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_04566242 = 1;
  }
  return Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x30BBA3C]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$CLNAOMIIBLH @ RVA 0x30BBA3C

void Nekki_SF2_GUI_Common_SceneMenuScroll__CLNAOMIIBLH
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  JPGJLKENNCC_o *pJVar3;
  OCOAGJDCJPL_o *__this_00;
  
  if ((DAT_04566243 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_BEMFAFLLOLP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_GDFABJELKAN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_GKHAKLDEIJI__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_04566243 = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    pJVar3 = (pNVar1->fields).GMLEPHMBMPD;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    if (pJVar3 != (JPGJLKENNCC_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)pJVar3,pSVar2,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_00 = (pNVar1->fields).KIHMKIEFOEI;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
            pJVar3 = (pNVar1->fields).GMLEPHMBMPD;
            pSVar2 = (System_Action_T0__T1__T2__o *)
                     thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
            System_Action<Int32Enum,_int,_Int32Enum>___ctor();
            if (pJVar3 != (JPGJLKENNCC_o *)0x0) {
              FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                        ((FMKGOOONJKB_T0__T1__T2__o *)pJVar3,pSVar2,
                         Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
              ENCPFKDEPJB__EAJCLBBOBDH(1,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI =
                   (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0;
              thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields,0);
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


// ===== public float get_AnimationDuration()  [RVA 0x30BBBDC]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$get_AnimationDuration @ RVA 0x30BBBDC

float Nekki_SF2_GUI_Common_SceneMenuScroll__get_AnimationDuration
                (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  return (__this->fields)._AnimationDuration;
}


// ===== private void JOAGGADHIEE(DBMPKPJGIPI INLIKJJNIIE)  [RVA 0x30BBBE4]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$JOAGGADHIEE @ RVA 0x30BBBE4

void Nekki_SF2_GUI_Common_SceneMenuScroll__JOAGGADHIEE
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t INLIKJJNIIE,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  Nekki_SF2_GUI_Common_SceneSelector_o *__this_00;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o **ppNVar5;
  System_Collections_Generic_List_T__o *__this_01;
  System_Collections_Generic_List_SceneSelector__o *__this_02;
  System_Object_array *pSVar6;
  Nekki_SF2_GUI_Common_SceneSelector_array *pNVar7;
  UnityEngine_GameObject_o *pUVar8;
  
  if ((DAT_04566244 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<SceneSelector>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBMPKPJGIPI>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566244 = 1;
  }
  bVar3 = MEJPIPJPKNP__CAMOIKJFFNC(INLIKJJNIIE,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar8 = (__this->fields)._SceneSelectorPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar8 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar8,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar4 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent
                (pUVar4,(UnityEngine_Transform_o *)(__this->fields)._SceneSelectorsParent,false,
                 (MethodInfo *)0x0);
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localEulerAngles
                  (pUVar4,(UnityEngine_Vector3_o)(ZEXT412(0x43870000) << 0x40),(MethodInfo *)0x0);
        __this_00 = (Nekki_SF2_GUI_Common_SceneSelector_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar8,Method_UnityEngine_GameObject_GetComponent<SceneSelector>__);
        if (__this_00 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
          ppNVar5 = &(__this_00->fields).MKAAKGJNBHI;
          *ppNVar5 = __this;
          thunk_FUN_01c20e04(ppNVar5,__this);
          Nekki_SF2_GUI_Common_SceneSelector__set_TargetScene
                    (__this_00,INLIKJJNIIE,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<DBMPKPJGIPI>_Add__;
          __this_01 = (System_Collections_Generic_List_T__o *)(__this->fields).BNLLNJDLGJB;
          if (__this_01 != (System_Collections_Generic_List_T__o *)0x0) {
            pSVar6 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pSVar6 != (System_Object_array *)0x0) {
              uVar1 = (__this_01->fields)._size;
              if (uVar1 < (uint)pSVar6->max_length) {
                (__this_01->fields)._size = uVar1 + 1;
                *(int32_t *)((long)pSVar6->m_Items + (long)(int)uVar1 * 4) = INLIKJJNIIE;
              }
              else {
                System_Collections_Generic_List<Int32Enum>__AddWithResize
                          (__this_01,INLIKJJNIIE,
                           *(MethodInfo_26C9F28 **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              lVar2 = Method_System_Collections_Generic_List<SceneSelector>_Add__;
              __this_02 = (__this->fields).FGIFPAPGJJN;
              if (__this_02 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
                pNVar7 = (__this_02->fields)._items;
                (__this_02->fields)._version = (__this_02->fields)._version + 1;
                if (pNVar7 != (Nekki_SF2_GUI_Common_SceneSelector_array *)0x0) {
                  uVar1 = (__this_02->fields)._size;
                  if (uVar1 < (uint)pNVar7->max_length) {
                    (__this_02->fields)._size = uVar1 + 1;
                    pNVar7->m_Items[(int)uVar1] = __this_00;
                    thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1,__this_00);
                    return;
                  }
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_02,
                             (Il2CppObject *)__this_00,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
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
  return;
}


// ===== public SceneMenuScroll.LJJIFKBBPFG get_CurrentState()  [RVA 0x30BBE00]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$get_CurrentState @ RVA 0x30BBE00

int32_t Nekki_SF2_GUI_Common_SceneMenuScroll__get_CurrentState
                  (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  return (__this->fields).IAAABJBDEMK;
}


// ===== public void Switch()  [RVA 0x30BBE08]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$Switch @ RVA 0x30BBE08

void Nekki_SF2_GUI_Common_SceneMenuScroll__Switch
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *in_x2;
  
  iVar1 = (__this->fields).IAAABJBDEMK;
  if (iVar1 == 1) {
    Nekki_SF2_GUI_Common_SceneMenuScroll__Close(__this,method);
    return;
  }
  if (iVar1 == 3) {
    Nekki_SF2_GUI_Common_SceneMenuScroll__Open(__this,0,in_x2);
    return;
  }
  return;
}


// ===== private void ENMNHIMEELL()  [RVA 0x30BBF38]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$ENMNHIMEELL @ RVA 0x30BBF38

void Nekki_SF2_GUI_Common_SceneMenuScroll__ENMNHIMEELL
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 031bbf40 to 032bbf47 has its CatchHandler @ 031bc154 */
  if ((DAT_04566245 & 1) == 0) {
                    /* try { // try from 031bbf54 to 032bbf5f has its CatchHandler @ 031bc188 */
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    DAT_04566245 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._OnStateChanged;
                    /* try { // try from 031bbf6c to 032bbf73 has its CatchHandler @ 031bc184 */
  (__this->fields).IAAABJBDEMK = 1;
  if (__this_00 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
                    /* try { // try from 031bbf7c to 032bbf83 has its CatchHandler @ 031bc17c */
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,1,
               Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void BEMFAFLLOLP(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x30BBF94]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$BEMFAFLLOLP @ RVA 0x30BBF94

void Nekki_SF2_GUI_Common_SceneMenuScroll__BEMFAFLLOLP
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar4;
  Nekki_SF2_GUI_Common_SceneSelector_o *pNVar5;
  Nekki_SF2_GUI_Common_SectionButton_o *__this_00;
  MethodInfo *method_00;
  int iVar6;
  System_Collections_Generic_List_SceneSelector__o *pSVar7;
  int iVar8;
  System_Collections_Generic_List_SceneSelector__o *__this_01;
  
                    /* try { // try from 031bbf9c to 032bbf9f has its CatchHandler @ 031bc150 */
                    /* try { // try from 031bbfa0 to 032bbfaf has its CatchHandler @ 031bc178 */
  pNVar4 = __this;
  if ((DAT_04566246 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_IndexOf__,NAIJBCMHBFK,
                 OPHMGAKOJLP);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_get_Count__);
                    /* try { // try from 031bbfc8 to 032bbfcb has its CatchHandler @ 031bc18c */
                    /* try { // try from 031bbfcc to 032bbfcf has its CatchHandler @ 031bc174 */
    pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_get_Item__);
    DAT_04566246 = 1;
  }
                    /* try { // try from 031bbfdc to 032bbfe3 has its CatchHandler @ 031bc16c */
  if ((__this->fields).IAAABJBDEMK != 1) {
    return;
  }
  if ((__this->fields).GLDOIEEOPCB != 0) {
    return;
  }
  if (0xd < (uint)AAJGEHHPMGH) {
    return;
  }
  uVar3 = 1 << (ulong)(AAJGEHHPMGH & 0x1f);
  if ((uVar3 & 0x1110) == 0) {
                    /* try { // try from 031bc018 to 032bc01b has its CatchHandler @ 031bc15c */
    if ((uVar3 & 0x2220) == 0) {
                    /* try { // try from 031bc0e0 to 032bc0fb has its CatchHandler @ 031bc140 */
      if (AAJGEHHPMGH != 0) {
                    /* try { // try from 031bbff4 to 032bbfff has its CatchHandler @ 031bc164 */
        return;
      }
      pNVar5 = (__this->fields).NFFFEDGMBIL;
      if (pNVar5 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
        bVar2 = AKJJAPEHKCG__MNKFDLHJPAA
                          ((UnityEngine_UI_Selectable_o *)(pNVar5->fields)._Button,(MethodInfo *)0x0
                          );
        if (bVar2) {
          return;
        }
        pNVar5 = (__this->fields).NFFFEDGMBIL;
                    /* try { // try from 031bc100 to 032bc137 has its CatchHandler @ 031bc138 */
        pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0;
        if (pNVar5 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
          __this_00 = (pNVar5->fields)._Button;
          pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0;
          if (__this_00 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
            SFButton__SetStatePressed((SFButton_o *)__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
                    /* try { // try from 031bc02c to 032bc02f has its CatchHandler @ 031bc180 */
      uVar3 = EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
      pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)(ulong)uVar3;
                    /* try { // try from 031bc030 to 032bc047 has its CatchHandler @ 031bc18c */
      __this_01 = (__this->fields).FGIFPAPGJJN;
      if (__this_01 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
                    /* try { // try from 031bc048 to 032bc04f has its CatchHandler @ 031bc14c */
        uVar3 = System_Collections_Generic_List<object>__IndexOf
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           (Il2CppObject *)(__this->fields).NFFFEDGMBIL,
                           Method_System_Collections_Generic_List<SceneSelector>_IndexOf__);
        pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)(ulong)uVar3;
        pSVar7 = (__this->fields).FGIFPAPGJJN;
        if (pSVar7 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
                    /* try { // try from 031bc058 to 032bc073 has its CatchHandler @ 031bc148 */
          iVar6 = (pSVar7->fields)._size;
          iVar8 = uVar3 + iVar6 + -1;
          goto LAB_031bc0bc;
        }
      }
    }
  }
  else {
                    /* try { // try from 031bc078 to 032bc0af has its CatchHandler @ 031bc13c */
    uVar3 = EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)(ulong)uVar3;
    __this_01 = (__this->fields).FGIFPAPGJJN;
    if (__this_01 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
      uVar3 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)(__this->fields).NFFFEDGMBIL,
                         Method_System_Collections_Generic_List<SceneSelector>_IndexOf__);
      pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)(ulong)uVar3;
      pSVar7 = (__this->fields).FGIFPAPGJJN;
      if (pSVar7 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
        iVar6 = (pSVar7->fields)._size;
                    /* try { // try from 031bc0b0 to 032bc0b3 has its CatchHandler @ 031bc170 */
                    /* try { // try from 031bc0b4 to 032bc0b7 has its CatchHandler @ 031bc168 */
                    /* try { // try from 031bc0b8 to 032bc0cf has its CatchHandler @ 031bc18c */
        iVar8 = uVar3 + 1;
LAB_031bc0bc:
        iVar1 = 0;
        if (iVar6 != 0) {
          iVar1 = iVar8 / iVar6;
        }
        method_00 = Method_System_Collections_Generic_List<SceneSelector>_get_Item__;
        pNVar5 = (Nekki_SF2_GUI_Common_SceneSelector_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,
                            iVar8 - iVar1 * iVar6,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<SceneSelector>_get_Item__);
                    /* try { // try from 031bc0d0 to 032bc0d7 has its CatchHandler @ 031bc144 */
        Nekki_SF2_GUI_Common_SceneMenuScroll__SelectScene(__this,pNVar5,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pNVar4);
}


// ===== private bool MNKFDLHJPAA(FEEECOADFNH AEIKGKKKFMM)  [RVA 0x30BB568]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$MNKFDLHJPAA @ RVA 0x30BB568

bool Nekki_SF2_GUI_Common_SceneMenuScroll__MNKFDLHJPAA
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t AEIKGKKKFMM,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *__this_00;
  
  if ((DAT_04566247 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<HintList>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04566247 = 1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
              Nekki_SF2_GUI_UIModule__GetModule<object>
                        (Method_Nekki_SF2_GUI_UIModule_GetModule<HintList>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    return false;
  }
  if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Common_Hints_HintList__IsTutorialBlockActive
                      (__this_00,AEIKGKKKFMM,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CMAEBFBFONH()  [RVA 0x30BC1C4]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$CMAEBFBFONH @ RVA 0x30BC1C4

void Nekki_SF2_GUI_Common_SceneMenuScroll__CMAEBFBFONH
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566248 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    DAT_04566248 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._OnStateChanged;
  (__this->fields).IAAABJBDEMK = 2;
  if (__this_00 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,2,
               Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void PEMOCAODJBA()  [RVA 0x30BC220]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$PEMOCAODJBA @ RVA 0x30BC220

void Nekki_SF2_GUI_Common_SceneMenuScroll__PEMOCAODJBA
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  Nekki_SF2_Core_Fights_Controls_GameController_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_02;
  FCJBEKHDLAF_o *pFVar3;
  OCOAGJDCJPL_o *__this_03;
  JPGJLKENNCC_o *__this_04;
  
  if ((DAT_04566249 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* try { // try from 031bc254 to 032bc263 has its CatchHandler @ 031bc264 */
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
                    /* catch() { ... } // from try @ 031bc1a4 with catch @ 031bc264
                       catch() { ... } // from try @ 031bc254 with catch @ 031bc264 */
                    /* try { // try from 031bc268 to 032bc26b has its CatchHandler @ 031bc274 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_BEMFAFLLOLP__);
                    /* try { // try from 031bc26c to 032bc277 has its CatchHandler @ 031bbe40 */
                    /* catch() { ... } // from try @ 031bc268 with catch @ 031bc274 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_GDFABJELKAN__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    DAT_04566249 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_03 = (pNVar1->fields).KIHMKIEFOEI;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    if (__this_03 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_03,pSVar2,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_04 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_04 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_04,pSVar2,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          ENCPFKDEPJB__EAJCLBBOBDH(1,(MethodInfo *)0x0);
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
            DAT_04565b7f = '\x01';
          }
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO != (FCJBEKHDLAF_o *)0x0) {
            if (DAT_04565c84 == '\0') {
              FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
              DAT_04565c84 = '\x01';
            }
            __this_00 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->
                        CNMHHKAMGPI;
            if (__this_00 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0)
            goto LAB_031bc470;
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)__this_00,true,(MethodInfo *)0x0);
            if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7f == '\0') {
              FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
              DAT_04565b7f = '\x01';
            }
            if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pFVar3 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
            if (pFVar3 == (FCJBEKHDLAF_o *)0x0) goto LAB_031bc470;
            (pFVar3->fields).MDJMIPGAJLL = false;
          }
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
            __this_02 = (__this->fields)._OnStateChanged;
            (__this->fields).IAAABJBDEMK = 3;
            if (__this_02 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
              UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                        ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,3,
                         Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__)
              ;
              return;
            }
          }
        }
      }
    }
  }
LAB_031bc470:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30BC474]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$.ctor @ RVA 0x30BC474

void Nekki_SF2_GUI_Common_SceneMenuScroll___ctor
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_00;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o **ppNVar1;
  System_Collections_Generic_List_T__o *__this_01;
  System_Collections_Generic_List_DBMPKPJGIPI__o **ppSVar2;
  System_Collections_Generic_List_SceneSelector__o *__this_02;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_SceneSelector__o **ppSVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_0456624a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBMPKPJGIPI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<SceneSelector>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_0456624a = 1;
    method = extraout_x1;
  }
  (__this->fields)._AnimationDuration = 0.5;
  (__this->fields)._AnimationEase = 1;
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_TypeInfo,method);
  __this_00 = auVar4._0_8_;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF___ctor(__this_00,auVar4._8_8_);
  ppNVar1 = &(__this->fields)._OnStateChanged;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_T__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DBMPKPJGIPI>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (__this_01,Method_System_Collections_Generic_List<DBMPKPJGIPI>__ctor__);
  ppSVar2 = &(__this->fields).BNLLNJDLGJB;
  *ppSVar2 = (System_Collections_Generic_List_DBMPKPJGIPI__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_SceneSelector__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<SceneSelector>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<SceneSelector>__ctor__);
  ppSVar3 = &(__this->fields).FGIFPAPGJJN;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  (__this->fields).IAAABJBDEMK = 3;
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SelectScene(DBMPKPJGIPI INLIKJJNIIE)  [RVA 0x30BC610]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$SelectScene @ RVA 0x30BC610

void Nekki_SF2_GUI_Common_SceneMenuScroll__SelectScene
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t INLIKJJNIIE,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  Nekki_SF2_GUI_Common_SceneSelector_o *ICAMOHMJIMA;
  MethodInfo *method_00;
  System_Collections_Generic_List_SceneSelector__o *__this_01;
  
  if ((DAT_0456624b & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_KNIEBCNONJG_EPEILCFJLHF__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_KNIEBCNONJG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_Find__);
    FUN_01bab630(&System_Predicate<SceneSelector>_TypeInfo);
    DAT_0456624b = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_SceneMenuScroll_KNIEBCNONJG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = INLIKJJNIIE;
    bVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll__MGPKIPFGKHJ(__this,INLIKJJNIIE,method);
    if (!bVar1) {
      return;
    }
    __this_01 = (__this->fields).FGIFPAPGJJN;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<SceneSelector>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<SceneSelector>_Find__;
      ICAMOHMJIMA = (Nekki_SF2_GUI_Common_SceneSelector_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_01,match,
                               (MethodInfo_26E5414 *)
                               Method_System_Collections_Generic_List<SceneSelector>_Find__);
                    /* try { // try from 031bc6f0 to 032bc73f has its CatchHandler @ 031bc6f0
                       catch() { ... } // from try @ 031bc6f0 with catch @ 031bc6f0
                       catch() { ... } // from try @ 031bc758 with catch @ 031bc6f0
                       catch() { ... } // from try @ 031bc798 with catch @ 031bc6f0
                       catch() { ... } // from try @ 031bc880 with catch @ 031bc6f0 */
      Nekki_SF2_GUI_Common_SceneMenuScroll__SelectScene(__this,ICAMOHMJIMA,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x30BC774]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$GIENGNEGHPJ @ RVA 0x30BC774

void Nekki_SF2_GUI_Common_SceneMenuScroll__GIENGNEGHPJ
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_Common_SceneSelector_o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD;
  System_Enum_o *NCPANDOCILC;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_SceneSelector__o *pSVar4;
  JPGJLKENNCC_o *__this_02;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o UVar8;
  undefined4 local_44;
  
                    /* try { // try from 031bc780 to 032bc797 has its CatchHandler @ 031bc878 */
                    /* try { // try from 031bc798 to 032bc867 has its CatchHandler @ 031bc6f0 */
  if ((DAT_0456624c & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_GKHAKLDEIJI__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_0456624c = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields,__this);
  Nekki_SF2_GUI_Common_SceneMenuScroll__BCCNAFAOOPB(__this,method_00);
  Nekki_SF2_GUI_Common_SceneMenuScroll__JHJLELACELF(__this,method_01);
  pUVar2 = (__this->fields)._Scroll;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._RollLeft;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._RollRight;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 031bc868 to 032bc877 has its CatchHandler @ 031bc878 */
        UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._Scroll;
                    /* catch() { ... } // from try @ 031bc780 with catch @ 031bc878
                       catch() { ... } // from try @ 031bc868 with catch @ 031bc878 */
        (__this->fields).JCJGBLBKEID.fields.x = UVar5.fields.x;
        (__this->fields).JCJGBLBKEID.fields.y = UVar6.fields.y + UVar7.fields.y;
                    /* try { // try from 031bc87c to 032bc87f has its CatchHandler @ 031bc888 */
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 031bc880 to 032bc88b has its CatchHandler @ 031bc6f0 */
          UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031bc87c with catch @ 031bc888
                        */
          __this_00 = (__this->fields).NFFFEDGMBIL;
                    /* try { // try from 031bc88c to 032bc90f has its CatchHandler @ 031bc88c
                       catch() { ... } // from try @ 031bc88c with catch @ 031bc88c
                       catch() { ... } // from try @ 031bc9e4 with catch @ 031bc88c
                       catch() { ... } // from try @ 031bca30 with catch @ 031bc88c
                       catch() { ... } // from try @ 031bcb18 with catch @ 031bc88c */
          if ((__this_00 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) &&
             (pUVar2 = (UnityEngine_RectTransform_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)__this_00,
                                  Method_UnityEngine_Component_GetComponent<RectTransform>__),
             pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
            pSVar4 = (__this->fields).FGIFPAPGJJN;
            if ((pSVar4 != (System_Collections_Generic_List_SceneSelector__o *)0x0) &&
               (pUVar2 = (__this->fields)._RollLeft, pUVar2 != (UnityEngine_RectTransform_o *)0x0))
            {
              iVar1 = (pSVar4->fields)._size;
              UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
              pUVar2 = (__this->fields)._RollRight;
              if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                UVar8 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._Scroll;
                (__this->fields).JNJNEIDIPEM.fields.x = UVar5.fields.x;
                (__this->fields).JNJNEIDIPEM.fields.y =
                     UVar6.fields.y * (float)iVar1 + UVar7.fields.y + UVar8.fields.y;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar2,(UnityEngine_Vector2_o)(__this->fields).JCJGBLBKEID.fields,
                             (MethodInfo *)0x0);
                    /* try { // try from 031bc910 to 032bc917 has its CatchHandler @ 031bc9f8 */
                  pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
                  if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* try { // try from 031bc91c to 032bc923 has its CatchHandler @ 031bc9f4 */
                    __this_02 = (pNVar3->fields).GMLEPHMBMPD;
                    PKKMGBOIDJD = (System_Action_T0__T1__T2__o *)
                                  thunk_FUN_01bda818(
                                                  System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo
                                                  );
                    /* try { // try from 031bc940 to 032bc943 has its CatchHandler @ 031bc9fc */
                    /* try { // try from 031bc944 to 032bc953 has its CatchHandler @ 031bca00 */
                    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    local_44 = 0;
                    NCPANDOCILC = (System_Enum_o *)
                                  thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_44);
                    if (__this_02 != (JPGJLKENNCC_o *)0x0) {
                    /* try { // try from 031bc964 to 032bc967 has its CatchHandler @ 031bc9f8 */
                    /* try { // try from 031bc968 to 032bc97f has its CatchHandler @ 031bc9f0 */
                      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                                ((FMKGOOONJKB_T0__T1__T2__o *)__this_02,PKKMGBOIDJD,NCPANDOCILC,
                                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
                    /* try { // try from 031bc980 to 032bc987 has its CatchHandler @ 031bc9ec */
                      __this_01 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031bc98c to 032bc9a7 has its CatchHandler @ 031bc9e8 */
                      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                    /* try { // try from 031bc9ac to 032bc9e3 has its CatchHandler @ 031bc9e4 */
                        return;
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


// ===== private bool MGPKIPFGKHJ(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x30BC71C]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$MGPKIPFGKHJ @ RVA 0x30BC71C

bool Nekki_SF2_GUI_Common_SceneMenuScroll__MGPKIPFGKHJ
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t KDLGNPCKLIJ,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_T__o *__this_00;
  
  if ((DAT_0456624d & 1) == 0) {
                    /* try { // try from 031bc740 to 032bc757 has its CatchHandler @ 031bc768 */
    FUN_01bab630(&Method_System_Collections_Generic_List<DBMPKPJGIPI>_Contains__);
    DAT_0456624d = 1;
  }
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).BNLLNJDLGJB;
  if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
                    /* try { // try from 031bc758 to 032bc77f has its CatchHandler @ 031bc6f0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc740 with catch @ 031bc768
                        */
    bVar1 = System_Collections_Generic_List<Int32Enum>__Contains
                      (__this_00,KDLGNPCKLIJ,
                       Method_System_Collections_Generic_List<DBMPKPJGIPI>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IODOMLACMMC()  [RVA 0x30BCB0C]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$IODOMLACMMC @ RVA 0x30BCB0C

void Nekki_SF2_GUI_Common_SceneMenuScroll__IODOMLACMMC
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_SceneSelector__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* catch() { ... } // from try @ 031bca18 with catch @ 031bcb10
                       catch() { ... } // from try @ 031bcb00 with catch @ 031bcb10 */
                    /* try { // try from 031bcb14 to 032bcb17 has its CatchHandler @ 031bcb20 */
                    /* try { // try from 031bcb18 to 032bcb23 has its CatchHandler @ 031bc88c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031bcb14 with catch @ 031bcb20
                        */
  if ((DAT_0456624e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SceneSelector>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SceneSelector>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SceneSelector>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_GetEnumerator__);
    DAT_0456624e = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).FGIFPAPGJJN;
  if (pSVar2 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<SceneSelector>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<SceneSelector>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_38.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current,(MethodInfo *)0x0
                              );
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<SceneSelector>_Dispose__)
    ;
    pSVar2 = (__this->fields).FGIFPAPGJJN;
    if (pSVar2 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectScene(SceneSelector ICAMOHMJIMA)  [RVA 0x30BC120]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$SelectScene @ RVA 0x30BC120

void Nekki_SF2_GUI_Common_SceneMenuScroll__SelectScene
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,
               Nekki_SF2_GUI_Common_SceneSelector_o *ICAMOHMJIMA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_SceneSelector_o **ppNVar2;
  Nekki_SF2_GUI_Common_SceneSelector_o *x;
  
                    /* catch() { ... } // from try @ 031bc100 with catch @ 031bc138
                       try { // try from 031bc138 to 032bc1a3 has its CatchHandler @ 031bbe40 */
                    /* catch() { ... } // from try @ 031bc078 with catch @ 031bc13c */
                    /* catch() { ... } // from try @ 031bc0e0 with catch @ 031bc140 */
                    /* catch() { ... } // from try @ 031bc0d0 with catch @ 031bc144 */
  if ((DAT_0456624f & 1) == 0) {
                    /* catch() { ... } // from try @ 031bc058 with catch @ 031bc148 */
                    /* catch() { ... } // from try @ 031bc048 with catch @ 031bc14c */
                    /* catch() { ... } // from try @ 031bbf9c with catch @ 031bc150 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 031bbf40 with catch @ 031bc154 */
                    /* catch() { ... } // from try @ 031bbed4 with catch @ 031bc158 */
    DAT_0456624f = 1;
  }
  ppNVar2 = &(__this->fields).NFFFEDGMBIL;
                    /* catch() { ... } // from try @ 031bc018 with catch @ 031bc15c */
  x = *ppNVar2;
                    /* catch() { ... } // from try @ 031bbf14 with catch @ 031bc160 */
                    /* catch() { ... } // from try @ 031bbff4 with catch @ 031bc164 */
                    /* catch() { ... } // from try @ 031bc0b4 with catch @ 031bc168 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031bbfdc with catch @ 031bc16c */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 031bc0b0 with catch @ 031bc170 */
                    /* catch() { ... } // from try @ 031bbfcc with catch @ 031bc174 */
                    /* catch() { ... } // from try @ 031bbfa0 with catch @ 031bc178 */
                    /* catch() { ... } // from try @ 031bbf7c with catch @ 031bc17c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031bc02c with catch @ 031bc180 */
  if (bVar1) {
                    /* catch() { ... } // from try @ 031bbf6c with catch @ 031bc184 */
                    /* catch() { ... } // from try @ 031bbf54 with catch @ 031bc188 */
    if (*ppNVar2 == (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) goto LAB_031bc1c0;
                    /* catch() { ... } // from try @ 031bbef4 with catch @ 031bc18c
                       catch() { ... } // from try @ 031bbfc8 with catch @ 031bc18c
                       catch() { ... } // from try @ 031bc030 with catch @ 031bc18c
                       catch() { ... } // from try @ 031bc0b8 with catch @ 031bc18c */
    Nekki_SF2_GUI_Common_SceneSelector__Unselect(*ppNVar2,(MethodInfo *)0x0);
  }
  *ppNVar2 = ICAMOHMJIMA;
  thunk_FUN_01c20e04(ppNVar2,ICAMOHMJIMA);
                    /* try { // try from 031bc1a4 to 032bc1bb has its CatchHandler @ 031bc264 */
  if (*ppNVar2 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
                    /* try { // try from 031bc1bc to 032bc253 has its CatchHandler @ 031bbe40 */
    Nekki_SF2_GUI_Common_SceneSelector__Select(*ppNVar2,(MethodInfo *)0x0);
    return;
  }
LAB_031bc1c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BCCNAFAOOPB()  [RVA 0x30BC9BC]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$BCCNAFAOOPB @ RVA 0x30BC9BC

void Nekki_SF2_GUI_Common_SceneMenuScroll__BCCNAFAOOPB
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Common_SceneMenuScroll__IODOMLACMMC(__this,method);
  Nekki_SF2_GUI_Common_SceneMenuScroll__JOAGGADHIEE(__this,3,in_x2);
  Nekki_SF2_GUI_Common_SceneMenuScroll__JOAGGADHIEE(__this,4,in_x2);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc9ac with catch @ 031bc9e4
                       try { // try from 031bc9e4 to 032bca17 has its CatchHandler @ 031bc88c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc98c with catch @ 031bc9e8
                        */
  Nekki_SF2_GUI_Common_SceneMenuScroll__JOAGGADHIEE(__this,5,in_x2);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc980 with catch @ 031bc9ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc968 with catch @ 031bc9f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc91c with catch @ 031bc9f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc910 with catch @ 031bc9f8
                       catch(type#1 @ 03f99f68) { ... } // from try @ 031bc964 with catch @ 031bc9f8
                        */
  Nekki_SF2_GUI_Common_SceneMenuScroll__JOAGGADHIEE(__this,7,in_x2);
  return;
}


// ===== public SceneMenuScroll.ENOALDKHIOF get_OnStateChanged()  [RVA 0x30BCC9C]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$get_OnStateChanged @ RVA 0x30BCC9C

Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *
Nekki_SF2_GUI_Common_SceneMenuScroll__get_OnStateChanged
          (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnStateChanged;
}


// ===== public void Close()  [RVA 0x30BBE2C]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$Close @ RVA 0x30BBE2C

void Nekki_SF2_GUI_Common_SceneMenuScroll__Close
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SectionButton_o *__this_00;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  Il2CppObject *t_00;
  DG_Tweening_TweenCallback_o *action;
  undefined8 uVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Common_SceneSelector_o *pNVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
                    /* try { // try from 031bbe40 to 032bbed3 has its CatchHandler @ 031bbe40
                       catch() { ... } // from try @ 031bbe40 with catch @ 031bbe40
                       catch() { ... } // from try @ 031bc138 with catch @ 031bbe40
                       catch() { ... } // from try @ 031bc1bc with catch @ 031bbe40
                       catch() { ... } // from try @ 031bc26c with catch @ 031bbe40 */
  if ((DAT_04566250 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_PEMOCAODJBA__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                );
    auVar3 = FUN_01bab630(&
                          Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                         );
    DAT_04566250 = 1;
  }
  uVar1 = auVar3._0_8_;
  if ((__this->fields).IAAABJBDEMK == 1) {
    pNVar2 = (__this->fields).NFFFEDGMBIL;
    if ((pNVar2 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) &&
       (__this_00 = (pNVar2->fields)._Button, uVar1 = 0,
       __this_00 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0)) {
      SFButton__SetStateNormal((SFButton_o *)__this_00,(MethodInfo *)0x0);
      t = DG_Tweening_DOTweenModuleUI__DOSizeDelta
                    ((__this->fields)._Scroll,
                     (UnityEngine_Vector2_o)(__this->fields).JCJGBLBKEID.fields,
                     (__this->fields)._AnimationDuration,false,(MethodInfo *)0x0);
      t_00 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                       ((Il2CppObject *)t,(__this->fields)._AnimationEase,
                        Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                       );
                    /* try { // try from 031bbed4 to 032bbedb has its CatchHandler @ 031bc158 */
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
                    /* try { // try from 031bbef4 to 032bbefb has its CatchHandler @ 031bc18c */
      DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 031bbf14 to 032bbf33 has its CatchHandler @ 031bc160 */
      DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                (t_00,action,
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                );
      Nekki_SF2_GUI_Common_SceneMenuScroll__CMAEBFBFONH(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(uVar1,auVar3._8_8_);
  }
  return;
}


// ===== private void JHJLELACELF()  [RVA 0x30BC9FC]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$JHJLELACELF @ RVA 0x30BC9FC

void Nekki_SF2_GUI_Common_SceneMenuScroll__JHJLELACELF
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  System_Predicate_SceneSelector__o **ppSVar1;
  Nekki_SF2_GUI_Common_SceneSelector_o *ICAMOHMJIMA;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_SceneSelector__o *__this_00;
  System_Predicate_SceneSelector__o *match;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc940 with catch @ 031bc9fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc944 with catch @ 031bca00
                        */
                    /* try { // try from 031bca18 to 032bca2f has its CatchHandler @ 031bcb10 */
  if ((DAT_04566251 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_Find__);
                    /* try { // try from 031bca30 to 032bcaff has its CatchHandler @ 031bc88c */
    FUN_01bab630(&System_Predicate<SceneSelector>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_ONANPKJNEOL__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo);
    DAT_04566251 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).FGIFPAPGJJN;
  if ((Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo->static_fields->__9__37_0;
  if (match == (System_Predicate_SceneSelector__o *)0x0) {
    if ((Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo,method);
    }
    match = (System_Predicate_SceneSelector__o *)
            thunk_FUN_01bda818(System_Predicate<SceneSelector>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo->static_fields->__9__37_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this_00 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
    method_00 = Method_System_Collections_Generic_List<SceneSelector>_Find__;
    ICAMOHMJIMA = (Nekki_SF2_GUI_Common_SceneSelector_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (System_Predicate_T__o *)match,
                             (MethodInfo_26E5414 *)
                             Method_System_Collections_Generic_List<SceneSelector>_Find__);
                    /* try { // try from 031bcb00 to 032bcb0f has its CatchHandler @ 031bcb10 */
    Nekki_SF2_GUI_Common_SceneMenuScroll__SelectScene(__this,ICAMOHMJIMA,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Open(SceneMenuScroll.HGHBDLEIEPP HIEHLGHMJDO = 0)  [RVA 0x30BB638]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$Open @ RVA 0x30BB638

void Nekki_SF2_GUI_Common_SceneMenuScroll__Open
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t HIEHLGHMJDO,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields endValue;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  Il2CppObject *t_00;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)HIEHLGHMJDO;
  if ((DAT_04566252 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_ENMNHIMEELL__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                );
    DAT_04566252 = 1;
    method_00 = extraout_x1;
  }
  if ((__this->fields).IAAABJBDEMK == 3) {
    Nekki_SF2_GUI_Common_SceneMenuScroll__JHJLELACELF(__this,method_00);
    endValue = (__this->fields).JNJNEIDIPEM.fields;
    (__this->fields).GLDOIEEOPCB = HIEHLGHMJDO;
    t = DG_Tweening_DOTweenModuleUI__DOSizeDelta
                  ((__this->fields)._Scroll,(UnityEngine_Vector2_o)endValue,
                   (__this->fields)._AnimationDuration,false,(MethodInfo *)0x0);
    t_00 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                     ((Il2CppObject *)t,(__this->fields)._AnimationEase,
                      Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                     );
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>
              (t_00,action,
               Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
              );
    Nekki_SF2_GUI_Common_SceneMenuScroll__MAFEFPMGALF(__this,method_01);
    return;
  }
  return;
}


// ===== private void GDFABJELKAN(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x30BCCA4]
// Nekki.SF2.GUI.Common.SceneMenuScroll$$GDFABJELKAN @ RVA 0x30BCCA4

void Nekki_SF2_GUI_Common_SceneMenuScroll__GDFABJELKAN
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_SectionButton_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Common_SceneSelector_o *pNVar2;
  
  if (((__this->fields).IAAABJBDEMK == 1) && ((__this->fields).GLDOIEEOPCB == 0)) {
    if ((AAJGEHHPMGH == 0x17) || (AAJGEHHPMGH == 1)) {
      bVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll__MNKFDLHJPAA
                        (__this,1,(MethodInfo *)(ulong)(uint)OPHMGAKOJLP);
      if (!bVar1) {
        EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Common_SceneMenuScroll__Close(__this,method_00);
        return;
      }
    }
    else if (AAJGEHHPMGH == 0) {
      pNVar2 = (__this->fields).NFFFEDGMBIL;
      if (pNVar2 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
        bVar1 = AKJJAPEHKCG__MNKFDLHJPAA
                          ((UnityEngine_UI_Selectable_o *)(pNVar2->fields)._Button,(MethodInfo *)0x0
                          );
        if (bVar1) {
          return;
        }
        EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).NFFFEDGMBIL;
        if ((pNVar2 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) &&
           (__this_00 = (pNVar2->fields)._Button,
           __this_00 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0)) {
          SFButton__SetStateNormal((SFButton_o *)__this_00,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).NFFFEDGMBIL;
          if (pNVar2 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
            LJLLAKHOFFF__AKKDDJDBIBD
                      ((UnityEngine_UI_Selectable_o *)(pNVar2->fields)._Button,(MethodInfo *)0x0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

