// TypeDefIndex 1239
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanLevelsInfoTable : MonoBehaviour
// Fields:
//   private readonly Color JEJMMKBGJAE; // 0x20
//   private readonly Color CCLCAEJGIFI; // 0x30
//   private readonly Color FMAJNCHLPOE; // 0x40
//   private SimpleScroll PDHMLFAMNCO; // 0x50
//   private ClanLevelInfoCell KFCHMBGIPJK; // 0x58
//   private int GPCPMFCFAMG; // 0x60
//   private List<RaidConfig.LDOMJFAAGAB> MHGDKPABBHD; // 0x68

// ===== public void .ctor()  [RVA 0x313CABC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelsInfoTable$$.ctor @ RVA 0x313CABC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  
  UVar1 = CFBGPBCDAGA__NFFPCFGDOKG(0xd2,0xb9,0x7c,0xff,(MethodInfo *)0x0);
  (__this->fields).JEJMMKBGJAE.fields.r = UVar1.fields.r;
  (__this->fields).JEJMMKBGJAE.fields.g = UVar1.fields.g;
  (__this->fields).JEJMMKBGJAE.fields.b = UVar1.fields.b;
  (__this->fields).JEJMMKBGJAE.fields.a = UVar1.fields.a;
  UVar1 = CFBGPBCDAGA__NFFPCFGDOKG(0x8b,0x68,0x3d,0xff,(MethodInfo *)0x0);
  (__this->fields).CCLCAEJGIFI.fields.r = UVar1.fields.r;
  (__this->fields).CCLCAEJGIFI.fields.g = UVar1.fields.g;
  (__this->fields).CCLCAEJGIFI.fields.b = UVar1.fields.b;
  (__this->fields).CCLCAEJGIFI.fields.a = UVar1.fields.a;
  UVar1 = CFBGPBCDAGA__NFFPCFGDOKG(0xa3,0x80,0x54,0xff,(MethodInfo *)0x0);
  (__this->fields).FMAJNCHLPOE.fields.r = UVar1.fields.r;
  (__this->fields).FMAJNCHLPOE.fields.g = UVar1.fields.g;
  (__this->fields).FMAJNCHLPOE.fields.b = UVar1.fields.b;
  (__this->fields).FMAJNCHLPOE.fields.a = UVar1.fields.a;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NCDOMAGEGCF()  [RVA 0x313CB34]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelsInfoTable$$NCDOMAGEGCF @ RVA 0x313CB34

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable__NCDOMAGEGCF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *__this_01;
  Il2CppObject *pIVar4;
  UnityEngine_Component_o *__this_02;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  UnityEngine_Color_o *pUVar8;
  uint index;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o *pNVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Color_o EFJKPCADGJH;
  
  if ((DAT_04566739 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ClanLevelInfoCell>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_LDOMJFAAGAB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_LDOMJFAAGAB>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ClanLevelInfoCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566739 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pNVar3 = (__this->fields).PDHMLFAMNCO;
    if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar3,(MethodInfo *)0x0);
      __this_01 = (__this->fields).MHGDKPABBHD;
      if (__this_01 == (System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *)0x0) {
        return;
      }
      index = 0;
      while (iVar1 = (__this_01->fields)._size, (int)index < iVar1) {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<RaidConfig_LDOMJFAAGAB>_get_Item__
                           );
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0323cde8;
        pfVar5 = &(__this->fields).JEJMMKBGJAE.fields.a;
        pfVar6 = &(__this->fields).JEJMMKBGJAE.fields.b;
        pfVar7 = &(__this->fields).JEJMMKBGJAE.fields.g;
        pUVar8 = &(__this->fields).JEJMMKBGJAE;
        if (((long)(__this->fields).GPCPMFCFAMG != (ulong)*(uint *)&pIVar4[1].klass) &&
           (pfVar5 = &(__this->fields).CCLCAEJGIFI.fields.a,
           pfVar6 = &(__this->fields).CCLCAEJGIFI.fields.b,
           pfVar7 = &(__this->fields).CCLCAEJGIFI.fields.g, pUVar8 = &(__this->fields).CCLCAEJGIFI,
           (index & 1) != 0)) {
          pfVar5 = &(__this->fields).FMAJNCHLPOE.fields.a;
          pfVar6 = &(__this->fields).FMAJNCHLPOE.fields.b;
          pfVar7 = &(__this->fields).FMAJNCHLPOE.fields.g;
          pUVar8 = &(__this->fields).FMAJNCHLPOE;
        }
        fVar10 = (pUVar8->fields).r;
        fVar13 = *pfVar7;
        fVar12 = *pfVar6;
        fVar11 = *pfVar5;
        pNVar9 = (__this->fields).KFCHMBGIPJK;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = (UnityEngine_Component_o *)
                    UnityEngine_Object__Instantiate<object>
                              ((Il2CppObject *)pNVar9,
                               Method_UnityEngine_Object_Instantiate<ClanLevelInfoCell>__);
        if ((__this_02 == (UnityEngine_Component_o *)0x0) ||
           (pNVar9 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o *)
                     UnityEngine_Component__GetComponent<object>
                               (__this_02,
                                Method_UnityEngine_Component_GetComponent<ClanLevelInfoCell>__),
           pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o *)0x0))
        goto LAB_0323cde8;
        EFJKPCADGJH.fields.g = fVar13;
        EFJKPCADGJH.fields.r = fVar10;
        EFJKPCADGJH.fields.a = fVar11;
        EFJKPCADGJH.fields.b = fVar12;
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell__SetBackgroundColor
                  (pNVar9,EFJKPCADGJH,(MethodInfo *)0x0);
        (*(pNVar9->klass->vtable)._52_UpdateView.methodPtr)
                  (pNVar9,pIVar4,(pNVar9->klass->vtable)._52_UpdateView.method);
        pNVar3 = (__this->fields).PDHMLFAMNCO;
        if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0323cde8;
        Nekki_SF2_GUI_SimpleScroll__AddItem
                  (pNVar3,(Nekki_SF2_GUI_BaseScrollItem_o *)pNVar9,true,(MethodInfo *)0x0);
        __this_01 = (__this->fields).MHGDKPABBHD;
        index = index + 1;
        if (__this_01 == (System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *)0x0)
        goto LAB_0323cde8;
      }
      pNVar3 = (__this->fields).PDHMLFAMNCO;
      if (0 < iVar1) {
        if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0323cde8;
        Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar3,0,0.0,8,(MethodInfo *)0x0);
        __this_01 = (__this->fields).MHGDKPABBHD;
        if (__this_01 == (System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *)0x0)
        goto LAB_0323cde8;
        pNVar3 = (__this->fields).PDHMLFAMNCO;
      }
      if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)pNVar3,1 < (__this_01->fields)._size,(MethodInfo *)0x0
                  );
        return;
      }
    }
  }
LAB_0323cde8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetCurrentClanLevel(int JLAFGLDIFOC)  [RVA 0x313CE08]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelsInfoTable$$SetCurrentClanLevel @ RVA 0x313CE08

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable__SetCurrentClanLevel
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable_o *__this,int32_t JLAFGLDIFOC,
               MethodInfo *method)

{
  (__this->fields).GPCPMFCFAMG = JLAFGLDIFOC;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable__NCDOMAGEGCF
            (__this,(MethodInfo *)(ulong)(uint)JLAFGLDIFOC);
  return;
}


// ===== private void OJPJPGLBOKH()  [RVA 0x313CDEC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelsInfoTable$$OJPJPGLBOKH @ RVA 0x313CDEC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable__OJPJPGLBOKH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(SimpleScroll MGFBPKIBNJI, ClanLevelInfoCell GEFKGPIDOGL)  [RVA 0x313CE10]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelsInfoTable$$Init @ RVA 0x313CE10

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable_o *__this,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o *GEFKGPIDOGL,MethodInfo *method
               )

{
  bool bVar1;
  RaidConfig_o *pJVar2;
  RaidConfig_DBNJFPILODG_o *pJVar3;
  Nekki_SF2_GUI_SimpleScroll_o *x;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o **ppNVar4;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar5;
  
  if ((DAT_0456673a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456673a = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar2 != (RaidConfig_o *)0x0) {
    pJVar3 = (pJVar2->fields)._LGFNDLOCGPB_k__BackingField;
    if (pJVar3 != (RaidConfig_DBNJFPILODG_o *)0x0) {
      (__this->fields).MHGDKPABBHD = (pJVar3->fields).GDIJHLHCEDA;
      thunk_FUN_01c20e04();
    }
    ppNVar5 = &(__this->fields).PDHMLFAMNCO;
    *ppNVar5 = MGFBPKIBNJI;
    thunk_FUN_01c20e04(ppNVar5,MGFBPKIBNJI);
    ppNVar4 = &(__this->fields).KFCHMBGIPJK;
    *ppNVar4 = GEFKGPIDOGL;
    thunk_FUN_01c20e04(ppNVar4,GEFKGPIDOGL);
    x = *ppNVar5;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (*ppNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__Init(*ppNVar5,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

