// TypeDefIndex 849
// Namespace: Nekki.SF2.GUI.Fight
// public class ActivePerkItem : MonoBehaviour, IComparable<ActivePerkItem>
// Fields:
//   private ResolutionImage _icon; // 0x20
//   private ResolutionImage _expiration; // 0x28
//   private LabelAlias _stackCount; // 0x30
//   private const float DKKMCOJGHOJ = 1;
//   private const float FJBFPMNBEEE = 0;
//   private string <COIPKAKHDFP>k__BackingField; // 0x38
//   private MovesInFightVariables.DOCBHLNBECF <EKIGEJEMNNN>k__BackingField; // 0x40
//   private bool <PBMMCACCKNJ>k__BackingField; // 0x48
//   private bool BLOOBCKMPEO; // 0x49
//   private bool DPJBDOHCFJK; // 0x4A
//   private bool <AMJLLCEPGIE>k__BackingField; // 0x4B
//   private float <HDLIFLCFFMI>k__BackingField; // 0x4C
//   private float <DPAPNHPIMMC>k__BackingField; // 0x50
//   private bool <MOEOPCDNOGP>k__BackingField; // 0x54
//   private int <IBLEFCPJBJI>k__BackingField; // 0x58
//   private int <HKOKBFOCJID>k__BackingField; // 0x5C
//   private bool <EONFHKCBPNB>k__BackingField; // 0x60
//   private bool <MIONCODGPCM>k__BackingField; // 0x61
//   private int <GHKKDOAIBFM>k__BackingField; // 0x64

// ===== public string get_Name()  [RVA 0x3085818]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_Name @ RVA 0x3085818

System_String_o *
Nekki_SF2_GUI_Fight_ActivePerkItem__get_Name
          (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x3085820]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$.ctor @ RVA 0x3085820

void Nekki_SF2_GUI_Fight_ActivePerkItem___ctor
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool get_Show()  [RVA 0x3085828]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_Show @ RVA 0x3085828

bool Nekki_SF2_GUI_Fight_ActivePerkItem__get_Show
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields).BLOOBCKMPEO;
}


// ===== public bool get_NeedDelete()  [RVA 0x3085830]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_NeedDelete @ RVA 0x3085830

bool Nekki_SF2_GUI_Fight_ActivePerkItem__get_NeedDelete
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._PBMMCACCKNJ_k__BackingField;
}


// ===== public float get_CurrentIconOpacity()  [RVA 0x3085838]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_CurrentIconOpacity @ RVA 0x3085838

float Nekki_SF2_GUI_Fight_ActivePerkItem__get_CurrentIconOpacity
                (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._HDLIFLCFFMI_k__BackingField;
}


// ===== private void ENAEKPAPHPO(int CJNHFNHJHPE)  [RVA 0x3085840]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$ENAEKPAPHPO @ RVA 0x3085840

void Nekki_SF2_GUI_Fight_ActivePerkItem__ENAEKPAPHPO
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IBLEFCPJBJI_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void Init(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x3085848]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$Init @ RVA 0x3085848

void Nekki_SF2_GUI_Fight_ActivePerkItem__Init
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,
               MethodInfo *method)

{
  bool bVar1;
  MovesInFightVariables_DOCBHLNBECF_o **ppMVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  System_String_o **ppSVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04566020 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566020 = 1;
  }
  ppMVar2 = &(__this->fields)._EKIGEJEMNNN_k__BackingField;
  *ppMVar2 = CPECAEHDDDB;
  thunk_FUN_01c20e04(ppMVar2,CPECAEHDDDB);
  if (CPECAEHDDDB == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) goto LAB_03185a94;
  ppSVar3 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
  *ppSVar3 = (CPECAEHDDDB->fields).KPDPJONADPJ;
  thunk_FUN_01c20e04(ppSVar3);
  (__this->fields)._MIONCODGPCM_k__BackingField = false;
  (__this->fields)._HDLIFLCFFMI_k__BackingField = 0.0;
  (__this->fields)._AMJLLCEPGIE_k__BackingField = true;
  (__this->fields)._PBMMCACCKNJ_k__BackingField = false;
  (__this->fields).BLOOBCKMPEO = true;
  if (DAT_045660f5 == '\0') {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_045660f5 = '\x01';
  }
  (__this->fields)._DPAPNHPIMMC_k__BackingField =
       OCAJCDIOMKB_TypeInfo->static_fields->_DPAPNHPIMMC_k__BackingField;
  Nekki_SF2_GUI_Fight_ActivePerkItem__set_ShowExpiration
            (__this,(CPECAEHDDDB->fields).FOFFKEAJPAF,method);
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
  }
  else if (__this_00->klass != UnityEngine_RectTransform_TypeInfo) {
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_03185a94;
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__AddComponent<object>
                          (__this_01,Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
  }
  pNVar4 = (__this->fields)._icon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._icon;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03185a94;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (pNVar4,(CPECAEHDDDB->fields).KPDPJONADPJ,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._icon;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03185a94;
    (*(pNVar4->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar4,(pNVar4->klass->vtable)._45_SetNativeSize.method);
    pNVar4 = (__this->fields)._icon;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03185a94;
    Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar4,0.0,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._icon;
    if (((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
        (__this_02 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar4,(MethodInfo *)0x0),
        __this_02 == (UnityEngine_RectTransform_o *)0x0)) ||
       (value = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03185a94;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._expiration;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = (__this->fields)._expiration;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_Alpha
              (pNVar4,(__this->fields)._DPAPNHPIMMC_k__BackingField,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._expiration;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_UI_Image__set_fillAmount((UnityEngine_UI_Image_o *)pNVar4,0.0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03185a94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_ShowExpiration()  [RVA 0x3085B54]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_ShowExpiration @ RVA 0x3085B54

bool Nekki_SF2_GUI_Fight_ActivePerkItem__get_ShowExpiration
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields).DPJBDOHCFJK;
}


// ===== private bool MEMGCFGOJLP()  [RVA 0x3085B5C]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$MEMGCFGOJLP @ RVA 0x3085B5C

bool Nekki_SF2_GUI_Fight_ActivePerkItem__MEMGCFGOJLP
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._MIONCODGPCM_k__BackingField;
}


// ===== private void GDDMJKMINFB()  [RVA 0x3085B64]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$GDDMJKMINFB @ RVA 0x3085B64

void Nekki_SF2_GUI_Fight_ActivePerkItem__GDDMJKMINFB
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  float fVar3;
  
  if ((DAT_04566021 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566021 = 1;
    method = extraout_x1;
  }
  fVar3 = (__this->fields)._HDLIFLCFFMI_k__BackingField;
  if (0.0 < fVar3) {
    if (DAT_045660f6 == '\0') {
      FUN_01bab630(&OCAJCDIOMKB_TypeInfo,method);
      DAT_045660f6 = '\x01';
      fVar3 = (__this->fields)._HDLIFLCFFMI_k__BackingField;
    }
    fVar3 = fVar3 + -1.0 / (OCAJCDIOMKB_TypeInfo->static_fields->_CLAAJDABDPF_k__BackingField).
                           fields.y;
    (__this->fields)._HDLIFLCFFMI_k__BackingField = fVar3;
    if (fVar3 <= 0.0) {
      (__this->fields)._HDLIFLCFFMI_k__BackingField = 0.0;
      (__this->fields)._AMJLLCEPGIE_k__BackingField = false;
    }
    pNVar2 = (__this->fields)._icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._icon;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_Alpha
                  (pNVar2,(__this->fields)._HDLIFLCFFMI_k__BackingField,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private bool GLFMBMABKCB()  [RVA 0x3085C50]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$GLFMBMABKCB @ RVA 0x3085C50

bool Nekki_SF2_GUI_Fight_ActivePerkItem__GLFMBMABKCB
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._MOEOPCDNOGP_k__BackingField;
}


// ===== private int HPCFDPPHFHE()  [RVA 0x3085C58]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$HPCFDPPHFHE @ RVA 0x3085C58

int32_t Nekki_SF2_GUI_Fight_ActivePerkItem__HPCFDPPHFHE
                  (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._IBLEFCPJBJI_k__BackingField;
}


// ===== private void MLHEBOEJHHL(bool CJNHFNHJHPE)  [RVA 0x3085C60]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$MLHEBOEJHHL @ RVA 0x3085C60

void Nekki_SF2_GUI_Fight_ActivePerkItem__MLHEBOEJHHL
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MOEOPCDNOGP_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x3085C6C]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$HCOCAAIGNNL @ RVA 0x3085C6C

void Nekki_SF2_GUI_Fight_ActivePerkItem__HCOCAAIGNNL
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private float OGDFFFNMIOH()  [RVA 0x3085C74]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$OGDFFFNMIOH @ RVA 0x3085C74

float Nekki_SF2_GUI_Fight_ActivePerkItem__OGDFFFNMIOH
                (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._DPAPNHPIMMC_k__BackingField;
}


// ===== private void IMHCNEKCDFG(bool CJNHFNHJHPE)  [RVA 0x3085C7C]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$IMHCNEKCDFG @ RVA 0x3085C7C

void Nekki_SF2_GUI_Fight_ActivePerkItem__IMHCNEKCDFG
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AMJLLCEPGIE_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void set_Show(bool CJNHFNHJHPE)  [RVA 0x3085A98]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$set_Show @ RVA 0x3085A98

void Nekki_SF2_GUI_Fight_ActivePerkItem__set_Show
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BLOOBCKMPEO = CJNHFNHJHPE;
  (__this->fields)._AMJLLCEPGIE_k__BackingField = true;
  return;
}


// ===== private void JKFFOGHCLNF(bool CJNHFNHJHPE)  [RVA 0x3085C88]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$JKFFOGHCLNF @ RVA 0x3085C88

void Nekki_SF2_GUI_Fight_ActivePerkItem__JKFFOGHCLNF
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MIONCODGPCM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool get_ChangeOpacity()  [RVA 0x3085C94]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_ChangeOpacity @ RVA 0x3085C94

bool Nekki_SF2_GUI_Fight_ActivePerkItem__get_ChangeOpacity
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._AMJLLCEPGIE_k__BackingField;
}


// ===== public void set_ShowExpiration(bool CJNHFNHJHPE)  [RVA 0x3085AAC]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$set_ShowExpiration @ RVA 0x3085AAC

void Nekki_SF2_GUI_Fight_ActivePerkItem__set_ShowExpiration
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04566022 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566022 = 1;
  }
  (__this->fields).DPJBDOHCFJK = CJNHFNHJHPE;
  pNVar2 = (__this->fields)._expiration;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._expiration;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,(__this->fields).DPJBDOHCFJK,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public int CompareTo(ActivePerkItem IBKIPBJJCPG)  [RVA 0x3085C9C]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$CompareTo @ RVA 0x3085C9C

int32_t Nekki_SF2_GUI_Fight_ActivePerkItem__CompareTo
                  (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,
                  Nekki_SF2_GUI_Fight_ActivePerkItem_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  MovesInFightVariables_DOCBHLNBECF_o *pMVar4;
  int local_24;
  
  if ((DAT_04566023 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566023 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)IBKIPBJJCPG,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    pMVar4 = (__this->fields)._EKIGEJEMNNN_k__BackingField;
    if (pMVar4 == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
      iVar3 = 0;
      iVar2 = 0;
    }
    else {
      iVar2 = (pMVar4->fields).AEPIFFHAKJG;
      iVar3 = (pMVar4->fields).CMPJANOIJAF;
    }
    local_24 = iVar3 - iVar2;
    if (IBKIPBJJCPG == (Nekki_SF2_GUI_Fight_ActivePerkItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar4 = (IBKIPBJJCPG->fields)._EKIGEJEMNNN_k__BackingField;
    if (pMVar4 == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
      iVar3 = 0;
      iVar2 = 0;
    }
    else {
      iVar2 = (pMVar4->fields).AEPIFFHAKJG;
      iVar3 = (pMVar4->fields).CMPJANOIJAF;
    }
    iVar2 = System_Int32__CompareTo((int32_t)&local_24,iVar3 - iVar2,(MethodInfo *)0x0);
  }
  return iVar2;
}


// ===== private void PIJMGOGCFCD(bool CJNHFNHJHPE)  [RVA 0x3085D78]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$PIJMGOGCFCD @ RVA 0x3085D78

void Nekki_SF2_GUI_Fight_ActivePerkItem__PIJMGOGCFCD
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PBMMCACCKNJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public MovesInFightVariables.DOCBHLNBECF get_Action()  [RVA 0x3085D84]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_Action @ RVA 0x3085D84

MovesInFightVariables_DOCBHLNBECF_o *
Nekki_SF2_GUI_Fight_ActivePerkItem__get_Action
          (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._EKIGEJEMNNN_k__BackingField;
}


// ===== public void set_PulseCount(int CJNHFNHJHPE)  [RVA 0x3085D8C]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$set_PulseCount @ RVA 0x3085D8C

void Nekki_SF2_GUI_Fight_ActivePerkItem__set_PulseCount
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HKOKBFOCJID_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void NKNOIMNMGLJ(float CJNHFNHJHPE)  [RVA 0x3085D94]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$NKNOIMNMGLJ @ RVA 0x3085D94

void Nekki_SF2_GUI_Fight_ActivePerkItem__NKNOIMNMGLJ
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HDLIFLCFFMI_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void ILDINJDFELD()  [RVA 0x3085D9C]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$ILDINJDFELD @ RVA 0x3085D9C

void Nekki_SF2_GUI_Fight_ActivePerkItem__ILDINJDFELD
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  byte bVar4;
  OCAJCDIOMKB_StaticFields *pOVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o value;
  
  if ((__this->fields)._HKOKBFOCJID_k__BackingField < 1) {
    return;
  }
  if (DAT_045660f7 == '\0') {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_045660f7 = '\x01';
    method = extraout_x1;
  }
  pOVar5 = OCAJCDIOMKB_TypeInfo->static_fields;
  fVar10 = pOVar5->_IDJGFJJAADF_k__BackingField;
  if (DAT_045660f8 == '\0') {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo,method);
    DAT_045660f8 = '\x01';
    pOVar5 = OCAJCDIOMKB_TypeInfo->static_fields;
    method = extraout_x1_00;
  }
  fVar11 = (pOVar5->_GCNJFEKMABG_k__BackingField).fields.x;
  fVar12 = (pOVar5->_GCNJFEKMABG_k__BackingField).fields.y;
  if (DAT_045660f9 == '\0') {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo,method);
    DAT_045660f9 = '\x01';
    pOVar5 = OCAJCDIOMKB_TypeInfo->static_fields;
  }
  fVar7 = (pOVar5->_MKEOMKHIEHM_k__BackingField).fields.x;
  fVar8 = (pOVar5->_MKEOMKHIEHM_k__BackingField).fields.y;
  bVar4 = (__this->fields)._MOEOPCDNOGP_k__BackingField;
  iVar6 = (__this->fields)._IBLEFCPJBJI_k__BackingField;
  fVar9 = fVar10;
  fVar2 = fVar8;
  if ((bool_conflict)bVar4 != false) {
    fVar9 = 1.0;
    fVar2 = fVar7;
  }
  iVar1 = -0x80000000;
  if (fVar2 != INFINITY) {
    iVar1 = (int)fVar2;
  }
  if (iVar1 < iVar6) {
    iVar6 = 0;
    bVar4 = bVar4 ^ 1;
    (__this->fields)._MOEOPCDNOGP_k__BackingField = (bool_conflict)bVar4;
    (__this->fields)._IBLEFCPJBJI_k__BackingField = 0;
  }
  if (iVar6 <= iVar1) {
    fVar9 = (float)iVar6;
    if (bVar4 == 0) {
      fVar9 = fVar10 - ((fVar10 + -1.0) / fVar8) *
                       ((1.0 - fVar12) * fVar9 + (fVar12 * fVar9 * fVar9) / fVar8);
      if (fVar9 <= 1.0) {
        (__this->fields)._HKOKBFOCJID_k__BackingField =
             (__this->fields)._HKOKBFOCJID_k__BackingField + -1;
      }
    }
    else {
      fVar9 = ((fVar10 + -1.0) / fVar7) *
              ((1.0 - fVar11) * fVar9 + (fVar11 * fVar9 * fVar9) / fVar7) + 1.0;
    }
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__get_localScale(pUVar3,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      value.fields.y = fVar9;
      value.fields.x = fVar9;
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(pUVar3,value,(MethodInfo *)0x0);
      (__this->fields)._IBLEFCPJBJI_k__BackingField =
           (__this->fields)._IBLEFCPJBJI_k__BackingField + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int get_PulseCount()  [RVA 0x3085F64]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_PulseCount @ RVA 0x3085F64

int32_t Nekki_SF2_GUI_Fight_ActivePerkItem__get_PulseCount
                  (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._HKOKBFOCJID_k__BackingField;
}


// ===== public void set_StackCount(int CJNHFNHJHPE)  [RVA 0x3085F6C]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$set_StackCount @ RVA 0x3085F6C

void Nekki_SF2_GUI_Fight_ActivePerkItem__set_StackCount
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GHKKDOAIBFM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void GNIMIJEOILI()  [RVA 0x3085F74]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$GNIMIJEOILI @ RVA 0x3085F74

void Nekki_SF2_GUI_Fight_ActivePerkItem__GNIMIJEOILI
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  float fVar3;
  
  if ((DAT_04566024 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566024 = 1;
    method = extraout_x1;
  }
  fVar3 = (__this->fields)._HDLIFLCFFMI_k__BackingField;
  if (fVar3 < 1.0) {
    if (DAT_045660f6 == '\0') {
      FUN_01bab630(&OCAJCDIOMKB_TypeInfo,method);
      DAT_045660f6 = '\x01';
      fVar3 = (__this->fields)._HDLIFLCFFMI_k__BackingField;
    }
    fVar3 = fVar3 + 1.0 / (OCAJCDIOMKB_TypeInfo->static_fields->_CLAAJDABDPF_k__BackingField).fields
                          .x;
    (__this->fields)._HDLIFLCFFMI_k__BackingField = fVar3;
    if (1.0 <= fVar3) {
      (__this->fields)._HDLIFLCFFMI_k__BackingField = 1.0;
      (__this->fields)._AMJLLCEPGIE_k__BackingField = false;
    }
    pNVar2 = (__this->fields)._icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._icon;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_Alpha
                  (pNVar2,(__this->fields)._HDLIFLCFFMI_k__BackingField,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void Destroy()  [RVA 0x3086068]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$Destroy @ RVA 0x3086068

void Nekki_SF2_GUI_Fight_ActivePerkItem__Destroy
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  (__this->fields)._PBMMCACCKNJ_k__BackingField = true;
  (__this->fields)._AMJLLCEPGIE_k__BackingField = false;
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  return;
}


// ===== public void Render()  [RVA 0x3086090]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$Render @ RVA 0x3086090

void Nekki_SF2_GUI_Fight_ActivePerkItem__Render
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_01;
  MovesInFightVariables_DOCBHLNBECF_o *pMVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  float value;
  
  if ((DAT_04566025 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566025 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ActivePerkItem__ILDINJDFELD(__this,method);
  Nekki_SF2_GUI_Fight_ActivePerkItem__GPFDBPGPKFM(__this,method_00);
  method_01 = extraout_x1_00;
  if ((__this->fields).DPJBDOHCFJK != false) {
    pNVar4 = (__this->fields)._expiration;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_01 = extraout_x1_01;
    if (bVar2) {
      pMVar3 = (__this->fields)._EKIGEJEMNNN_k__BackingField;
      value = 0.0;
      if ((pMVar3 != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) &&
         (iVar1 = (pMVar3->fields).CMPJANOIJAF, iVar1 != 0)) {
        value = (float)(pMVar3->fields).AEPIFFHAKJG / (float)iVar1;
      }
      pNVar4 = (__this->fields)._expiration;
      if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031861e8;
      UnityEngine_UI_Image__set_fillAmount((UnityEngine_UI_Image_o *)pNVar4,value,(MethodInfo *)0x0)
      ;
      method_01 = extraout_x1_02;
    }
  }
  if ((__this->fields)._AMJLLCEPGIE_k__BackingField != false) {
    if ((__this->fields).BLOOBCKMPEO == false) {
      Nekki_SF2_GUI_Fight_ActivePerkItem__GDDMJKMINFB(__this,method_01);
    }
    else {
      Nekki_SF2_GUI_Fight_ActivePerkItem__GNIMIJEOILI(__this,method_01);
    }
    if ((__this->fields).DPJBDOHCFJK != false) {
      pNVar4 = (__this->fields)._expiration;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        pNVar4 = (__this->fields)._expiration;
        if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_031861e8:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Nekki_SF2_GUI_ResolutionImage__set_Alpha
                  (pNVar4,(__this->fields)._DPAPNHPIMMC_k__BackingField *
                          (__this->fields)._HDLIFLCFFMI_k__BackingField,(MethodInfo *)0x0);
      }
    }
    if ((__this->fields)._HDLIFLCFFMI_k__BackingField == 0.0) {
      (__this->fields)._PBMMCACCKNJ_k__BackingField = true;
      (__this->fields)._AMJLLCEPGIE_k__BackingField = false;
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== public int get_CurrentFrames()  [RVA 0x3086284]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_CurrentFrames @ RVA 0x3086284

int32_t Nekki_SF2_GUI_Fight_ActivePerkItem__get_CurrentFrames
                  (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  MovesInFightVariables_DOCBHLNBECF_o *pMVar1;
  
  pMVar1 = (__this->fields)._EKIGEJEMNNN_k__BackingField;
  if (pMVar1 != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
    return (pMVar1->fields).AEPIFFHAKJG;
  }
  return 0;
}


// ===== private void HCOFEDDMOEK()  [RVA 0x308629C]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$HCOFEDDMOEK @ RVA 0x308629C

void Nekki_SF2_GUI_Fight_ActivePerkItem__HCOFEDDMOEK
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04566026 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566026 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).BLOOBCKMPEO == false) {
    pNVar2 = (__this->fields)._icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._icon;
      if (pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar2,1.0,(MethodInfo *)0x0);
      (__this->fields)._HDLIFLCFFMI_k__BackingField = 1.0;
      (__this->fields).BLOOBCKMPEO = true;
      (__this->fields)._AMJLLCEPGIE_k__BackingField = true;
    }
  }
  return;
}


// ===== public int get_TotalFrames()  [RVA 0x308626C]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_TotalFrames @ RVA 0x308626C

int32_t Nekki_SF2_GUI_Fight_ActivePerkItem__get_TotalFrames
                  (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  MovesInFightVariables_DOCBHLNBECF_o *pMVar1;
  
  pMVar1 = (__this->fields)._EKIGEJEMNNN_k__BackingField;
  if (pMVar1 != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
    return (pMVar1->fields).CMPJANOIJAF;
  }
  return 0;
}


// ===== public int get_FramesToEnd()  [RVA 0x3085D5C]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_FramesToEnd @ RVA 0x3085D5C

int32_t Nekki_SF2_GUI_Fight_ActivePerkItem__get_FramesToEnd
                  (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  MovesInFightVariables_DOCBHLNBECF_o *pMVar3;
  
  pMVar3 = (__this->fields)._EKIGEJEMNNN_k__BackingField;
  if (pMVar3 == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = (pMVar3->fields).AEPIFFHAKJG;
    iVar1 = (pMVar3->fields).CMPJANOIJAF;
  }
  return iVar1 - iVar2;
}


// ===== public int get_StackCount()  [RVA 0x3086338]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_StackCount @ RVA 0x3086338

int32_t Nekki_SF2_GUI_Fight_ActivePerkItem__get_StackCount
                  (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._GHKKDOAIBFM_k__BackingField;
}


// ===== private void GPFDBPGPKFM()  [RVA 0x30861EC]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$GPFDBPGPKFM @ RVA 0x30861EC

void Nekki_SF2_GUI_Fight_ActivePerkItem__GPFDBPGPKFM
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar2;
  int local_14;
  
  pNVar1 = (__this->fields)._stackCount;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive
              (__this_00,0 < (__this->fields)._GHKKDOAIBFM_k__BackingField,(MethodInfo *)0x0);
    local_14 = (__this->fields)._GHKKDOAIBFM_k__BackingField;
    if (0 < local_14) {
      pNVar1 = (__this->fields)._stackCount;
      pSVar2 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
      if (pNVar1 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03186268;
      (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                (pNVar1,pSVar2,(pNVar1->klass->vtable)._75_set_text.method);
    }
    return;
  }
LAB_03186268:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_DeleteRequested()  [RVA 0x3086340]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_DeleteRequested @ RVA 0x3086340

bool Nekki_SF2_GUI_Fight_ActivePerkItem__get_DeleteRequested
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._EONFHKCBPNB_k__BackingField;
}


// ===== private void MCPHIECCMAB(bool CJNHFNHJHPE)  [RVA 0x3086348]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$MCPHIECCMAB @ RVA 0x3086348

void Nekki_SF2_GUI_Fight_ActivePerkItem__MCPHIECCMAB
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._EONFHKCBPNB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void INNPCPMFLIH()  [RVA 0x3086354]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$INNPCPMFLIH @ RVA 0x3086354

void Nekki_SF2_GUI_Fight_ActivePerkItem__INNPCPMFLIH
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  MovesInFightVariables_DOCBHLNBECF_o **ppMVar1;
  
  ppMVar1 = &(__this->fields)._EKIGEJEMNNN_k__BackingField;
  *ppMVar1 = (MovesInFightVariables_DOCBHLNBECF_o *)0x0;
  thunk_FUN_01c20e04(ppMVar1,0);
  return;
}


// ===== private void FOLGGCLOIKC(float CJNHFNHJHPE)  [RVA 0x3086360]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$FOLGGCLOIKC @ RVA 0x3086360

void Nekki_SF2_GUI_Fight_ActivePerkItem__FOLGGCLOIKC
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DPAPNHPIMMC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void INJOMAFNCDK(MovesInFightVariables.DOCBHLNBECF CJNHFNHJHPE)  [RVA 0x3086368]
// Nekki.SF2.GUI.Fight.ActivePerkItem$$INJOMAFNCDK @ RVA 0x3086368

void Nekki_SF2_GUI_Fight_ActivePerkItem__INJOMAFNCDK
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MovesInFightVariables_DOCBHLNBECF_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._EKIGEJEMNNN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

