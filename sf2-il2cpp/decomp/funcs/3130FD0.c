// Nekki.SF2.GUI.Fight.EndPvpFightContent$$Init @ RVA 0x3130FD0

void Nekki_SF2_GUI_Fight_EndPvpFightContent__Init
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               UnityEngine_UI_VerticalLayoutGroup_o *ODNJEHJPBGA,
               UnityEngine_UI_Button_o *IHDIBJAICLO,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Button_o **ppUVar2;
  IGPDCHBJAPD_JMPAGIGEFME_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar4;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar5;
  MethodInfo *method_00;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar6;
  IGPDCHBJAPD_o **ppIVar7;
  
  if ((DAT_045666c7 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<VerticalLayoutGroup>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_045666c7 = 1;
  }
  ppUVar2 = &(__this->fields).HMJLEBNKJMH;
  *ppUVar2 = IHDIBJAICLO;
  thunk_FUN_01c20e04(ppUVar2,IHDIBJAICLO);
  ppIVar7 = &(__this->fields).CIKGADOJJMG;
  *ppIVar7 = PNPKEKHEMCD;
  thunk_FUN_01c20e04(ppIVar7,PNPKEKHEMCD);
  (__this->fields).BGINDOKLEKD = 0;
  if ((*ppIVar7 != (IGPDCHBJAPD_o *)0x0) &&
     (__this_00 = ((*ppIVar7)->fields).GIIFANGGEHM, __this_00 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0))
  {
    pSVar3 = IGPDCHBJAPD_JMPAGIGEFME__ACBMLHJIFMD(__this_00,true,(MethodInfo *)0x0);
    ppSVar6 = &(__this->fields).DPOPJKJLDEE;
    *ppSVar6 = pSVar3;
    thunk_FUN_01c20e04(ppSVar6,pSVar3);
    if (*ppSVar6 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      iVar1 = ((*ppSVar6)->fields)._size;
      ppUVar4 = &(__this->fields).BLJFLADGIJC;
      *ppUVar4 = ODNJEHJPBGA;
      thunk_FUN_01c20e04(ppUVar4,ODNJEHJPBGA);
      pUVar5 = (UnityEngine_UI_VerticalLayoutGroup_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponent<VerticalLayoutGroup>__);
      (__this->fields).OPOHEPKDHPD = pUVar5;
      thunk_FUN_01c20e04();
      if (0 < iVar1) {
        Nekki_SF2_GUI_Fight_EndPvpFightContent__IEJCGPFBDPG(__this,method_00);
        return;
      }
      Nekki_SF2_GUI_Fight_EndPvpFightContent__GPCOJMMLMLG(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

