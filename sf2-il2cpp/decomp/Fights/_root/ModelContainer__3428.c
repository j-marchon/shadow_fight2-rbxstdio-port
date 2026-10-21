// TypeDefIndex 3428
// Namespace: Nekki.SF2.Core.Fights
// public class ModelContainer : MonoBehaviour
// Fields:
//   private Vector2 _modelPosition; // 0x20
//   private Action<Model.EAOIGPODIAI> LKGKDIMGDHL; // 0x28
//   private Action NHDEFBNHAKC; // 0x30
//   private float <BEEGDJFPEHO>k__BackingField; // 0x38
//   private float <IJMMLDDCHFB>k__BackingField; // 0x3C
//   private bool OJCNHILHDAM; // 0x40
//   private bool JAKNPPAIFCC; // 0x41
//   private bool HCDEJEHGGDJ; // 0x42
//   private bool OHHFPJMIOCP; // 0x43
//   private StageType.HEJHMMBJODB GJPPMNKLLGD; // 0x44
//   private bool ALBNJDPLOKJ; // 0x48
//   private int IBGCIPCGICB; // 0x4C
//   private ModelParameters MFLNIMCFPDK; // 0x50
//   private Model MAODNBMLDEG; // 0x58
//   private KHEDNGODOIC ANDGPHHMNMC; // 0x60
//   private Location CNHHLPPHNCO; // 0x68
//   private KKEKJDLEJIL ALMHAKDJNDJ; // 0x70
//   private EventTriggers CAGHFDGCFPG; // 0x78
//   private List<Model> EHJHKEEDKBE; // 0x80
//   private List<Model> AGOBPAPPBEM; // 0x88
//   private List<Model> NCPKMPACJNP; // 0x90
//   private Color BDOPOCFLMHL; // 0x98

// ===== public float get_Width()  [RVA 0x355F6F4]
// Nekki.SF2.Core.Fights.ModelContainer$$get_Width @ RVA 0x355F6F4

float Nekki_SF2_Core_Fights_ModelContainer__get_Width
                (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  return (__this->fields)._BEEGDJFPEHO_k__BackingField;
}


// ===== private DNKALCKOJKC IHLKNJDGOMK(string ACCIHBHMFPN)  [RVA 0x355F6FC]
// Nekki.SF2.Core.Fights.ModelContainer$$IHLKNJDGOMK @ RVA 0x355F6FC

int32_t Nekki_SF2_Core_Fights_ModelContainer__IHLKNJDGOMK
                  (Nekki_SF2_Core_Fights_ModelContainer_o *__this,System_String_o *ACCIHBHMFPN,
                  MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  undefined8 *puVar3;
  
  if ((DAT_04568bc0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_4617/*"Consumable"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_10491/*"Profile"*/);
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_04568bc0 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (uVar2 < 0x93d79fb3) {
    if (uVar2 < 0x1d39e33f) {
      if (uVar2 == 0x1c5c36fb) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6589/*"Free"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 7;
      }
      if (uVar2 != 0x1d39e33e) {
        return 0;
      }
      puVar3 = &StringLiteral_10823/*"RaidConsumable"*/;
    }
    else {
      if (uVar2 == 0x84b84174) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3076/*"Armor"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 1;
      }
      if (uVar2 == 0x93d79fb2) {
        puVar3 = &StringLiteral_4617/*"Consumable"*/;
        goto LAB_0365f984;
      }
      if (uVar2 != 0x3e128863) {
        return 0;
      }
      puVar3 = &StringLiteral_10876/*"RaidItemPack"*/;
    }
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,(System_String_o *)*puVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return 8;
    }
  }
  else {
    if (uVar2 < 0xb960112d) {
      if (uVar2 == 0x9d9dc599) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_7066/*"Helm"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 3;
      }
      if (uVar2 == 0xb7c10361) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 2;
      }
      if (uVar2 != 0xb960112c) {
        return 0;
      }
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 5;
    }
    if (uVar2 == 0xcb2ec7a2) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 4;
    }
    if (uVar2 == 0xcd17328e) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10491/*"Profile"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 9;
    }
    if (uVar2 != 0xea117bb0) {
      return 0;
    }
    puVar3 = &StringLiteral_11073/*"RealMoneyItem"*/;
LAB_0365f984:
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,(System_String_o *)*puVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return 6;
    }
  }
  return 0;
}


// ===== public void PlayAnimation(string KGLJICLJHEL, int OAFGMHOFEKM = 1)  [RVA 0x355F9F8]
// Nekki.SF2.Core.Fights.ModelContainer$$PlayAnimation @ RVA 0x355F9F8

void Nekki_SF2_Core_Fights_ModelContainer__PlayAnimation
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,System_String_o *KGLJICLJHEL,
               int32_t OAFGMHOFEKM,MethodInfo *method)

{
  InfoAnimation_o *OCFNILDEHHP;
  Model_o *__this_00;
  
  if ((DAT_04568bc1 & 1) == 0) {
    FUN_01bab630(&AnimationData_TypeInfo,KGLJICLJHEL,OAFGMHOFEKM);
    DAT_04568bc1 = 1;
  }
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCFNILDEHHP = AnimationData__CCBEONOLBID(KGLJICLJHEL,true,(MethodInfo *)0x0);
  if (OCFNILDEHHP != (InfoAnimation_o *)0x0) {
    __this_00 = (__this->fields).MAODNBMLDEG;
    if (__this_00 != (Model_o *)0x0) {
      Model__NFJPOGJJEAK(__this_00,OCFNILDEHHP,0,false,-1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void CFOFLMBPNOE(Model BCKBBGCOMJD)  [RVA 0x355FA98]
// Nekki.SF2.Core.Fights.ModelContainer$$CFOFLMBPNOE @ RVA 0x355FA98

void Nekki_SF2_Core_Fights_ModelContainer__CFOFLMBPNOE
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,Model_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  PKNBJJPHAKI_o *__this_01;
  MethodInfo *method_00;
  Model_array *pOVar3;
  KHEDNGODOIC_o *pKVar4;
  
  if ((DAT_04568bc2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_Add__);
    DAT_04568bc2 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<Model>_Add__;
  __this_00 = (__this->fields).AGOBPAPPBEM;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    pOVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pOVar3 != (Model_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pOVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pOVar3->m_Items[(int)uVar1] = BCKBBGCOMJD;
        thunk_FUN_01c20e04(pOVar3->m_Items + (int)uVar1,BCKBBGCOMJD);
      }
      else {
        method = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)BCKBBGCOMJD,(MethodInfo_26E4DAC *)method);
      }
      Nekki_SF2_Core_Fights_ModelContainer__LPACIEFGEOB(__this,BCKBBGCOMJD,method);
      pKVar4 = (__this->fields).ANDGPHHMNMC;
      if (((pKVar4 != (KHEDNGODOIC_o *)0x0) && (BCKBBGCOMJD != (Model_o *)0x0)) &&
         (__this_01 = (pKVar4->fields).BAFJNPPPBMK, __this_01 != (PKNBJJPHAKI_o *)0x0)) {
        PKNBJJPHAKI__OCJCMHLABBF
                  (__this_01,(BCKBBGCOMJD->fields).HMIAFJALFCJ,
                   (UnityEngine_Color_o)(__this->fields).BDOPOCFLMHL.fields,true,(MethodInfo *)0x0);
        pKVar4 = (__this->fields).ANDGPHHMNMC;
        if (pKVar4 != (KHEDNGODOIC_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          KHEDNGODOIC__DFLHLNGDGEP(pKVar4,BCKBBGCOMJD,(MethodInfo *)0x0);
          Nekki_SF2_Core_Fights_ModelContainer__ECCABGPPFBD(__this,BCKBBGCOMJD,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void FDBDGHMBJOK(float CJNHFNHJHPE)  [RVA 0x356002C]
// Nekki.SF2.Core.Fights.ModelContainer$$FDBDGHMBJOK @ RVA 0x356002C

void Nekki_SF2_Core_Fights_ModelContainer__FDBDGHMBJOK
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IJMMLDDCHFB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void set_ModelPosition(Vector2 CJNHFNHJHPE)  [RVA 0x3560034]
// Nekki.SF2.Core.Fights.ModelContainer$$set_ModelPosition @ RVA 0x3560034

void Nekki_SF2_Core_Fights_ModelContainer__set_ModelPosition
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._modelPosition.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields)._modelPosition.fields.y = CJNHFNHJHPE.fields.y;
  Nekki_SF2_Core_Fights_ModelContainer__ResetModelPosition(__this,method);
  return;
}


// ===== private void FJHEDBMBEFI(HOOAAGABMBL IKKAMAMLIKA, ModelParameters OKBIKHHKOEN, StageType.HEJHMMBJODB LFHPEEKGNDO, string CNONPGEIGJM)  [RVA 0x35600D4]
// Nekki.SF2.Core.Fights.ModelContainer$$FJHEDBMBEFI @ RVA 0x35600D4

void Nekki_SF2_Core_Fights_ModelContainer__FJHEDBMBEFI
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               ModelParameters_o *OKBIKHHKOEN,int32_t LFHPEEKGNDO,System_String_o *CNONPGEIGJM,
               MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  UnityEngine_Vector2_Fields UVar3;
  long lVar4;
  bool bVar5;
  int32_t iVar6;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  System_Action_OLKKAIFGGAK__o *pSVar7;
  System_Action_o *CJNHFNHJHPE_00;
  System_Action_OLKKAIFGGAK__o **ppSVar8;
  Vector3f_o *__this_00;
  System_String_o *pSVar9;
  ModelParameters_o *pPVar10;
  EventTriggers_o *pIVar11;
  HOOAAGABMBL_o *extraout_x1;
  HOOAAGABMBL_o *method_00;
  MethodInfo *method_01;
  ModelParameters_o *OKBIKHHKOEN_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *pMVar12;
  Model_array *pOVar13;
  Model_o **ppOVar14;
  ModelParameters_o *pPVar15;
  Vector3f_o **ppCVar16;
  Model_o *pOVar17;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar18;
  ModelParameters_o **ppPVar19;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar20;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  
  pMVar12 = (MethodInfo *)(ulong)(uint)LFHPEEKGNDO;
  method_00 = IKKAMAMLIKA;
  pPVar10 = OKBIKHHKOEN;
  if ((DAT_04568bc3 & 1) == 0) {
    FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    FUN_01bab630(&System_Action<Model>_TypeInfo);
    FUN_01bab630(&System_Action<Model_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_CFOFLMBPNOE__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_MDPKLJJENLO__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_MPICEHINPFC__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_NCCFAEMDMKL__);
    FUN_01bab630(&Model_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_<>c_GLPIDAMHHIN__);
    FUN_01bab630(&Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_04568bc3 = 1;
    method_00 = extraout_x1;
  }
  (__this->fields).GJPPMNKLLGD = LFHPEEKGNDO;
  Nekki_SF2_Core_Fights_ModelContainer__LICIHGOBMAI(__this,(MethodInfo *)method_00);
  ppOVar14 = &(__this->fields).MAODNBMLDEG;
  pOVar17 = *ppOVar14;
  if (pOVar17 != (Model_o *)0x0) {
    CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                  thunk_FUN_01bda818(System_Action<Model_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    Model__CKHNFICFCKA(pOVar17,CJNHFNHJHPE,(MethodInfo *)0x0);
    pOVar17 = (__this->fields).MAODNBMLDEG;
    pSVar7 = (System_Action_OLKKAIFGGAK__o *)thunk_FUN_01bda818(System_Action<Model>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pOVar17 == (Model_o *)0x0) goto LAB_036607cc;
    Model__EMBAGANBCKF(pOVar17,pSVar7,(MethodInfo *)0x0);
    pOVar17 = (__this->fields).MAODNBMLDEG;
    pSVar7 = (System_Action_OLKKAIFGGAK__o *)thunk_FUN_01bda818(System_Action<Model>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pOVar17 == (Model_o *)0x0) goto LAB_036607cc;
    Model__LHMMNGOCLFD(pOVar17,pSVar7,(MethodInfo *)0x0);
    pOVar17 = (__this->fields).MAODNBMLDEG;
    CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    pMVar12 = (MethodInfo *)0x0;
    System_Action___ctor();
    if (pOVar17 == (Model_o *)0x0) goto LAB_036607cc;
    Model__FMLFNOKEPPG(pOVar17,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    pSVar18 = (__this->fields).EHJHKEEDKBE;
    if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__48_0;
    if (pSVar7 == (System_Action_OLKKAIFGGAK__o *)0x0) {
      if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar7 = (System_Action_OLKKAIFGGAK__o *)
               thunk_FUN_01bda818(System_Action<Model>_TypeInfo);
      pMVar12 = (MethodInfo *)0x0;
      System_Action<object>___ctor();
      ppSVar8 = &Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__48_0;
      *ppSVar8 = pSVar7;
      thunk_FUN_01c20e04(ppSVar8,pSVar7);
    }
    if (pSVar18 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_036607cc;
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)pSVar18,(System_Action_T__o *)pSVar7,
               Method_System_Collections_Generic_List<Model>_ForEach__);
    pSVar18 = (__this->fields).EHJHKEEDKBE;
    if (pSVar18 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_036607cc;
    uVar1 = (pSVar18->fields)._size;
    pPVar10 = (ModelParameters_o *)(ulong)uVar1;
    (pSVar18->fields)._size = 0;
    (pSVar18->fields)._version = (pSVar18->fields)._version + 1;
    if (0 < (int)uVar1) {
      pMVar12 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar18->fields)._items,0,uVar1,(MethodInfo *)0x0);
    }
    *ppOVar14 = (Model_o *)0x0;
    thunk_FUN_01c20e04(ppOVar14,0);
  }
  ppPVar19 = &(__this->fields).MFLNIMCFPDK;
  *ppPVar19 = OKBIKHHKOEN;
  thunk_FUN_01c20e04(ppPVar19,OKBIKHHKOEN);
  pPVar15 = *ppPVar19;
  UVar3 = (__this->fields)._modelPosition.fields;
  __this_00 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  PHCOHKNFGLE.fields.z = 0.0;
  PHCOHKNFGLE.fields._0_8_ = UVar3;
  Vector3f___ctor(__this_00,PHCOHKNFGLE,(MethodInfo *)0x0);
  if (pPVar15 == (ModelParameters_o *)0x0) goto LAB_036607cc;
  ppCVar16 = &(pPVar15->fields).NMFDFHKAIHG;
  *ppCVar16 = __this_00;
  thunk_FUN_01c20e04(ppCVar16,__this_00);
  pPVar15 = *ppPVar19;
  if (pPVar15 == (ModelParameters_o *)0x0) goto LAB_036607cc;
  (pPVar15->fields).BLJLIBHLGLI = false;
  CVar20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (pPVar15->fields).DHGNGIKCDON.fields = CVar20;
  pPVar15 = *ppPVar19;
  iVar6 = Nekki_SF2_Core_Fights_ModelContainer__IHLKNJDGOMK
                    (CVar20._0_8_,CNONPGEIGJM,(MethodInfo *)pPVar10);
  if (pPVar15 == (ModelParameters_o *)0x0) goto LAB_036607cc;
  (pPVar15->fields).HLPLAKCBINK = iVar6;
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__DIDHPPFOFHC(__this,method_01);
    goto LAB_036605c4;
  }
  pSVar9 = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
  if (pSVar9 == (System_String_o *)0x0) goto LAB_036607cc;
  bVar5 = System_String__Equals(pSVar9,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
  if (bVar5) {
    if (((__this->fields).ALMHAKDJNDJ == (KKEKJDLEJIL_o *)0x0) ||
       (*ppPVar19 == (ModelParameters_o *)0x0)) goto LAB_036607cc;
    pPVar10 = (ModelParameters_o *)&((*ppPVar19)->fields).PNAAPNFPCPI;
    *(HOOAAGABMBL_o **)pPVar10 = IKKAMAMLIKA;
LAB_036605bc:
    thunk_FUN_01c20e04(pPVar10,IKKAMAMLIKA);
LAB_036605c4:
    pPVar10 = *ppPVar19;
  }
  else {
    pSVar9 = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
    if (pSVar9 == (System_String_o *)0x0) goto LAB_036607cc;
    bVar5 = System_String__Equals(pSVar9,StringLiteral_3076/*"Armor"*/,(MethodInfo *)0x0);
    if (bVar5) {
      if (((__this->fields).ALMHAKDJNDJ == (KKEKJDLEJIL_o *)0x0) ||
         (*ppPVar19 == (ModelParameters_o *)0x0)) goto LAB_036607cc;
      pPVar10 = (ModelParameters_o *)&((*ppPVar19)->fields).PEMECEBIJDM;
      *(HOOAAGABMBL_o **)pPVar10 = IKKAMAMLIKA;
      goto LAB_036605bc;
    }
    pSVar9 = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
    if (pSVar9 == (System_String_o *)0x0) goto LAB_036607cc;
    bVar5 = System_String__Equals(pSVar9,StringLiteral_7066/*"Helm"*/,(MethodInfo *)0x0);
    if (bVar5) {
      if (((__this->fields).ALMHAKDJNDJ == (KKEKJDLEJIL_o *)0x0) ||
         (*ppPVar19 == (ModelParameters_o *)0x0)) goto LAB_036607cc;
      pPVar10 = (ModelParameters_o *)&((*ppPVar19)->fields).IIDEPPHFJPA;
      *(HOOAAGABMBL_o **)pPVar10 = IKKAMAMLIKA;
      goto LAB_036605bc;
    }
    pSVar9 = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
    if (pSVar9 == (System_String_o *)0x0) goto LAB_036607cc;
    bVar5 = System_String__Equals(pSVar9,StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0);
    if (bVar5) {
      if (((__this->fields).ALMHAKDJNDJ == (KKEKJDLEJIL_o *)0x0) ||
         (*ppPVar19 == (ModelParameters_o *)0x0)) goto LAB_036607cc;
      pPVar10 = (ModelParameters_o *)&((*ppPVar19)->fields).NBHGHLIPCAP;
      *(HOOAAGABMBL_o **)pPVar10 = IKKAMAMLIKA;
      goto LAB_036605bc;
    }
    pSVar9 = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
    if (pSVar9 == (System_String_o *)0x0) goto LAB_036607cc;
    bVar5 = System_String__Equals(pSVar9,StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0);
    if (bVar5) {
      if (((__this->fields).ALMHAKDJNDJ == (KKEKJDLEJIL_o *)0x0) ||
         (*ppPVar19 == (ModelParameters_o *)0x0)) goto LAB_036607cc;
      pPVar10 = (ModelParameters_o *)&((*ppPVar19)->fields).AIDDHEHFBEG;
      *(HOOAAGABMBL_o **)pPVar10 = IKKAMAMLIKA;
      goto LAB_036605bc;
    }
    pSVar9 = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
    if (pSVar9 == (System_String_o *)0x0) goto LAB_036607cc;
    bVar5 = System_String__Equals(pSVar9,StringLiteral_10823/*"RaidConsumable"*/,(MethodInfo *)0x0);
    if (!bVar5) goto LAB_036605c4;
    pSVar9 = (IKKAMAMLIKA->fields)._DKODBGOHKGH_k__BackingField;
    if (pSVar9 == (System_String_o *)0x0) goto LAB_036607cc;
    bVar5 = System_String__Equals(pSVar9,StringLiteral_10806/*"RaidCharge"*/,(MethodInfo *)0x0);
    if (!bVar5) goto LAB_036605c4;
    if ((__this->fields).ALMHAKDJNDJ == (KKEKJDLEJIL_o *)0x0) goto LAB_036607cc;
    pPVar15 = *ppPVar19;
    pPVar10 = (ModelParameters_o *)0x0;
    if (pPVar15 != (ModelParameters_o *)0x0) {
      bVar2 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
      if ((bVar2 <= (pPVar15->klass->_2).naturalAligment) &&
         ((pPVar15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)ADGIHFGIFHO_TypeInfo)) {
        pPVar10 = pPVar15 + 1;
        pPVar15[1].klass = (ModelParameters_c *)IKKAMAMLIKA;
        goto LAB_036605bc;
      }
      goto LAB_036605c4;
    }
  }
  if (pPVar10 != (ModelParameters_o *)0x0) {
    ModelParameters__OBDMCJAPKPJ(pPVar10,(MethodInfo *)0x0);
    pPVar10 = (__this->fields).MFLNIMCFPDK;
    if (pPVar10 != (ModelParameters_o *)0x0) {
      (*(pPVar10->klass->vtable)._8_KMKKECDCBEF.methodPtr)
                (pPVar10,(__this->fields).ALMHAKDJNDJ,(pPVar10->klass->vtable)._8_KMKKECDCBEF.method
                );
      Nekki_SF2_Core_Fights_ModelContainer__EDIHPONOJPH(__this,OKBIKHHKOEN_00,CNONPGEIGJM,pMVar12);
      if ((__this->fields).OJCNHILHDAM != false) {
        pPVar10 = (__this->fields).MFLNIMCFPDK;
        (__this->fields).OJCNHILHDAM = false;
        if (pPVar10 == (ModelParameters_o *)0x0) goto LAB_036607cc;
        (*(pPVar10->klass->vtable)._8_KMKKECDCBEF.methodPtr)
                  (pPVar10,(__this->fields).ALMHAKDJNDJ,
                   (pPVar10->klass->vtable)._8_KMKKECDCBEF.method);
      }
      (__this->fields).JAKNPPAIFCC = false;
      pPVar10 = (__this->fields).MFLNIMCFPDK;
      pOVar17 = (Model_o *)thunk_FUN_01bda818(Model_TypeInfo);
      Model___ctor(pOVar17,pPVar10,(MethodInfo *)0x0);
      (__this->fields).MAODNBMLDEG = pOVar17;
      thunk_FUN_01c20e04(ppOVar14,pOVar17);
      pOVar17 = (__this->fields).MAODNBMLDEG;
      if (pOVar17 != (Model_o *)0x0) {
        pMVar12 = (pOVar17->klass->vtable)._5_ILGAFEJCKBD.method;
        (*(pOVar17->klass->vtable)._5_ILGAFEJCKBD.methodPtr)(pOVar17,0);
        Nekki_SF2_Core_Fights_ModelContainer__LPACIEFGEOB
                  (__this,(__this->fields).MAODNBMLDEG,pMVar12);
        pIVar11 = (__this->fields).CAGHFDGCFPG;
        if (pIVar11 != (EventTriggers_o *)0x0) {
          EventTriggers__DKKDJFFKDHJ(pIVar11,(MethodInfo *)0x0);
          pIVar11 = (__this->fields).CAGHFDGCFPG;
          if (pIVar11 != (EventTriggers_o *)0x0) {
            EventTriggers__OCJCMHLABBF(pIVar11,(__this->fields).MAODNBMLDEG,(MethodInfo *)0x0);
            lVar4 = Method_System_Collections_Generic_List<Model>_Add__;
            pSVar18 = (__this->fields).EHJHKEEDKBE;
            if (pSVar18 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
              pOVar17 = (__this->fields).MAODNBMLDEG;
              pOVar13 = (pSVar18->fields)._items;
              (pSVar18->fields)._version = (pSVar18->fields)._version + 1;
              if (pOVar13 != (Model_array *)0x0) {
                uVar1 = (pSVar18->fields)._size;
                if (uVar1 < (uint)pOVar13->max_length) {
                  (pSVar18->fields)._size = uVar1 + 1;
                  pOVar13->m_Items[(int)uVar1] = pOVar17;
                  thunk_FUN_01c20e04(pOVar13->m_Items + (int)uVar1);
                  pMVar12 = extraout_x1_00;
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar18,
                             (Il2CppObject *)pOVar17,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  pMVar12 = extraout_x1_01;
                }
                Nekki_SF2_Core_Fights_ModelContainer__MMNIMNPKOGB(__this,pMVar12);
                Nekki_SF2_Core_Fights_ModelContainer__BDHAMOEKNNK(__this,method_02);
                Nekki_SF2_Core_Fights_ModelContainer__GINIGIPIOIL(__this,method_03);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_036607cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MMNIMNPKOGB()  [RVA 0x3560AD8]
// Nekki.SF2.Core.Fights.ModelContainer$$MMNIMNPKOGB @ RVA 0x3560AD8

void Nekki_SF2_Core_Fights_ModelContainer__MMNIMNPKOGB
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  EventTriggers_o *__this_00;
  MethodInfo *in_x2;
  Model_o *pOVar2;
  Model_EAOIGPODIAI_o *pOVar3;
  Il2CppObject **ppIVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  int32_t local_14;
  
  if ((DAT_04568bc4 & 1) == 0) {
    FUN_01bab630(&StageType_HEJHMMBJODB_TypeInfo);
    DAT_04568bc4 = 1;
  }
  pOVar2 = (__this->fields).MAODNBMLDEG;
  if (pOVar2 != (Model_o *)0x0) {
    pOVar3 = (pOVar2->fields).PDCHNCOIHHA;
    local_14 = (__this->fields).GJPPMNKLLGD;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(StageType_HEJHMMBJODB_TypeInfo,&local_14);
    if (pOVar3 != (Model_EAOIGPODIAI_o *)0x0) {
      ppIVar4 = &(pOVar3->fields).KOANCCDDBDA;
      *ppIVar4 = pIVar1;
      thunk_FUN_01c20e04(ppIVar4,pIVar1);
      pOVar2 = (__this->fields).MAODNBMLDEG;
      CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((__this->fields).GJPPMNKLLGD,(MethodInfo *)0x0);
      if (pOVar2 != (Model_o *)0x0) {
        (pOVar2->fields).LGKFKNGIPDM.fields = CVar5;
        Nekki_SF2_Core_Fights_ModelContainer__ECCABGPPFBD(__this,(__this->fields).MAODNBMLDEG,in_x2)
        ;
        pOVar2 = (__this->fields).MAODNBMLDEG;
        if ((pOVar2 != (Model_o *)0x0) &&
           (__this_00 = (__this->fields).CAGHFDGCFPG, __this_00 != (EventTriggers_o *)0x0)) {
          EventTriggers__BKBHKFCCKDO(__this_00,1,(pOVar2->fields).PDCHNCOIHHA,false,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x3560F88]
// Nekki.SF2.Core.Fights.ModelContainer$$RandomizeObscuredVars @ RVA 0x3560F88

void Nekki_SF2_Core_Fights_ModelContainer__RandomizeObscuredVars
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  System_Action_OLKKAIFGGAK__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  System_Action_OLKKAIFGGAK__o *action;
  
  if ((DAT_04568bc5 & 1) == 0) {
    FUN_01bab630(&System_Action<Model>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_<>c_MINMIDFADAC__);
    FUN_01bab630(&Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo);
    DAT_04568bc5 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).EHJHKEEDKBE;
  if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__76_0;
  if (action == (System_Action_OLKKAIFGGAK__o *)0x0) {
    if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo,method);
    }
    action = (System_Action_OLKKAIFGGAK__o *)thunk_FUN_01bda818(System_Action<Model>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__76_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<Model>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NCCFAEMDMKL(Model.EAOIGPODIAI PGPLLGEIFPI)  [RVA 0x356108C]
// Nekki.SF2.Core.Fights.ModelContainer$$NCCFAEMDMKL @ RVA 0x356108C

void Nekki_SF2_Core_Fights_ModelContainer__NCCFAEMDMKL
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,
               Model_EAOIGPODIAI_o *PGPLLGEIFPI,MethodInfo *method)

{
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar1;
  
  pSVar1 = (__this->fields).LKGKDIMGDHL;
  if (pSVar1 != (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036610a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,PGPLLGEIFPI,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_ForceSlowFrames(int CJNHFNHJHPE)  [RVA 0x35610B0]
// Nekki.SF2.Core.Fights.ModelContainer$$set_ForceSlowFrames @ RVA 0x35610B0

void Nekki_SF2_Core_Fights_ModelContainer__set_ForceSlowFrames
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).IBGCIPCGICB = CJNHFNHJHPE;
  if (0 < CJNHFNHJHPE) {
    (__this->fields).ALBNJDPLOKJ = true;
  }
  return;
}


// ===== private void OGCMOEOKOJP(int DPJIDNBJIBG, Model GANEIBPLOIA)  [RVA 0x35610C8]
// Nekki.SF2.Core.Fights.ModelContainer$$OGCMOEOKOJP @ RVA 0x35610C8

void Nekki_SF2_Core_Fights_ModelContainer__OGCMOEOKOJP
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,int32_t DPJIDNBJIBG,
               Model_o *GANEIBPLOIA,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  PKNBJJPHAKI_o *__this_00;
  Model_o *method_00;
  KHEDNGODOIC_o *pKVar3;
  
  method_00 = GANEIBPLOIA;
  if ((DAT_04568bc6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_get_Item__);
    DAT_04568bc6 = 1;
  }
  pSVar2 = (__this->fields).EHJHKEEDKBE;
  if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    if (((DPJIDNBJIBG < 0) || (iVar1 = (pSVar2->fields)._size, iVar1 == 0)) ||
       (iVar1 + -1 < DPJIDNBJIBG)) {
LAB_0366119c:
      Nekki_SF2_Core_Fights_ModelContainer__HMDJFLDLPMN(__this,GANEIBPLOIA,(MethodInfo *)method_00);
      return;
    }
    GANEIBPLOIA = (Model_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar2,DPJIDNBJIBG,
                             Method_System_Collections_Generic_List<Model>_get_Item__);
    pKVar3 = (__this->fields).ANDGPHHMNMC;
    if ((pKVar3 != (KHEDNGODOIC_o *)0x0) &&
       (__this_00 = (pKVar3->fields).BAFJNPPPBMK, __this_00 != (PKNBJJPHAKI_o *)0x0)) {
      PKNBJJPHAKI__HMDJFLDLPMN(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
      pKVar3 = (__this->fields).ANDGPHHMNMC;
      if (pKVar3 != (KHEDNGODOIC_o *)0x0) {
        KHEDNGODOIC__BALEGGJGENM(pKVar3,GANEIBPLOIA,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).EHJHKEEDKBE;
        if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
          method_00 = Method_System_Collections_Generic_List<Model>_Remove__;
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GANEIBPLOIA
                     ,(MethodInfo_26E62D4 *)
                      Method_System_Collections_Generic_List<Model>_Remove__);
          goto LAB_0366119c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public StageType.HEJHMMBJODB get__StageType()  [RVA 0x35613F8]
// Nekki.SF2.Core.Fights.ModelContainer$$get__StageType @ RVA 0x35613F8

int32_t Nekki_SF2_Core_Fights_ModelContainer__get__StageType
                  (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  return (__this->fields).GJPPMNKLLGD;
}


// ===== public bool IsItemDiffer(ModelParameters OKBIKHHKOEN)  [RVA 0x3561400]
// Nekki.SF2.Core.Fights.ModelContainer$$IsItemDiffer @ RVA 0x3561400

bool Nekki_SF2_Core_Fights_ModelContainer__IsItemDiffer
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,ModelParameters_o *OKBIKHHKOEN,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  MethodInfo *in_x3;
  KKEKJDLEJIL_o *pKVar3;
  
  __this_00 = __this;
  if ((DAT_04568bc7 & 1) == 0) {
    __this_00 = (Nekki_SF2_Core_Fights_ModelContainer_o *)FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    DAT_04568bc7 = 1;
  }
  pKVar3 = (__this->fields).ALMHAKDJNDJ;
  if ((pKVar3 != (KKEKJDLEJIL_o *)0x0) && (OKBIKHHKOEN != (ModelParameters_o *)0x0)) {
    bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                      (__this_00,(pKVar3->fields).PEMECEBIJDM,(OKBIKHHKOEN->fields).PEMECEBIJDM,
                       in_x3);
    if (!bVar2) {
      pKVar3 = (__this->fields).ALMHAKDJNDJ;
      if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
      bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                        ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,(pKVar3->fields).IIDEPPHFJPA,
                         (OKBIKHHKOEN->fields).IIDEPPHFJPA,in_x3);
      if (!bVar2) {
        pKVar3 = (__this->fields).ALMHAKDJNDJ;
        if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
        bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                          ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
                           (pKVar3->fields).HLAAFCIMBAP,(OKBIKHHKOEN->fields).HLAAFCIMBAP,in_x3);
        if (!bVar2) {
          pKVar3 = (__this->fields).ALMHAKDJNDJ;
          if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
          bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                            ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
                             (pKVar3->fields).GCPBHJOPMJE,(OKBIKHHKOEN->fields).GCPBHJOPMJE,in_x3);
          if (!bVar2) {
            pKVar3 = (__this->fields).ALMHAKDJNDJ;
            if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
            bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                              ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
                               (pKVar3->fields).PNAAPNFPCPI,(OKBIKHHKOEN->fields).PNAAPNFPCPI,in_x3)
            ;
            if (!bVar2) {
              pKVar3 = (__this->fields).ALMHAKDJNDJ;
              if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
              bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                                ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
                                 (pKVar3->fields).AIDDHEHFBEG,(OKBIKHHKOEN->fields).AIDDHEHFBEG,
                                 in_x3);
              if (!bVar2) {
                pKVar3 = (__this->fields).ALMHAKDJNDJ;
                if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
                bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                                  ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
                                   (pKVar3->fields).NBHGHLIPCAP,(OKBIKHHKOEN->fields).NBHGHLIPCAP,
                                   in_x3);
                if (!bVar2) {
                  bVar1 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
                  if ((bVar1 <= (OKBIKHHKOEN->klass->_2).naturalAligment) &&
                     ((OKBIKHHKOEN->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                      (Il2CppClass *)ADGIHFGIFHO_TypeInfo)) {
                    pKVar3 = (__this->fields).ALMHAKDJNDJ;
                    if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
                    bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                                      ((Nekki_SF2_Core_Fights_ModelContainer_o *)(ulong)bVar2,
                                       (pKVar3->fields).GFNKONPLPEB,
                                       (HOOAAGABMBL_o *)OKBIKHHKOEN[1].klass,in_x3);
                    if (bVar2) {
                      return true;
                    }
                  }
                  return false;
                }
              }
            }
          }
        }
      }
    }
    return true;
  }
LAB_03661540:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ResetModel()  [RVA 0x3561580]
// Nekki.SF2.Core.Fights.ModelContainer$$ResetModel @ RVA 0x3561580

void Nekki_SF2_Core_Fights_ModelContainer__ResetModel
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  EventTriggers_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  
  Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ(__this,false,in_x2);
  __this_00 = (__this->fields).CAGHFDGCFPG;
  if (__this_00 != (EventTriggers_o *)0x0) {
    EventTriggers__DGLJCGNHLIG(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_Core_Fights_ModelContainer__ResetModelPosition(__this,method_00);
    Nekki_SF2_Core_Fights_ModelContainer__MMNIMNPKOGB(__this,method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EPJHLPDILHI()  [RVA 0x3560890]
// Nekki.SF2.Core.Fights.ModelContainer$$EPJHLPDILHI @ RVA 0x3560890

void Nekki_SF2_Core_Fights_ModelContainer__EPJHLPDILHI
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x356164C]
// Nekki.SF2.Core.Fights.ModelContainer$$.ctor @ RVA 0x356164C

void Nekki_SF2_Core_Fights_ModelContainer___ctor
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o **ppSVar1;
  System_Action_o **ppSVar2;
  Location_o *__this_00;
  Location_o **ppNVar3;
  KKEKJDLEJIL_o *__this_01;
  KKEKJDLEJIL_o **ppKVar4;
  EventTriggers_o *__this_02;
  EventTriggers_o **ppIVar5;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar6;
  System_Collections_Generic_List_OLKKAIFGGAK__o **ppSVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar8;
  System_Action_o *pSVar9;
  
  if ((DAT_04568bc8 & 1) == 0) {
    FUN_01bab630(&System_Action<Model_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&EventTriggers_TypeInfo);
    FUN_01bab630(&KKEKJDLEJIL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Model>_TypeInfo);
    FUN_01bab630(&Location_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_<>c_DFOOGPBHOJB__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_<>c_GOKDAHOEKDL__);
    FUN_01bab630(&Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo);
    DAT_04568bc8 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar8 = Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__77_0;
  if (pSVar8 == (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)0x0) {
    if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo,method);
    }
    pSVar8 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
             thunk_FUN_01bda818(System_Action<Model_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__77_0;
    *ppSVar1 = pSVar8;
    thunk_FUN_01c20e04(ppSVar1,pSVar8);
  }
  if (__this != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    ppSVar1 = &(__this->fields).LKGKDIMGDHL;
    *ppSVar1 = pSVar8;
    thunk_FUN_01c20e04(ppSVar1,pSVar8);
    if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar9 = Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__77_1;
    if (pSVar9 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar9 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar2 = &Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__77_1;
      *ppSVar2 = pSVar9;
      thunk_FUN_01c20e04(ppSVar2,pSVar9);
    }
    ppSVar2 = &(__this->fields).NHDEFBNHAKC;
    *ppSVar2 = pSVar9;
    thunk_FUN_01c20e04(ppSVar2,pSVar9);
    (__this->fields).OHHFPJMIOCP = true;
    __this_00 = (Location_o *)thunk_FUN_01bda818(Location_TypeInfo);
    Location___ctor(__this_00,(MethodInfo *)0x0);
    ppNVar3 = &(__this->fields).CNHHLPPHNCO;
    *ppNVar3 = __this_00;
    thunk_FUN_01c20e04(ppNVar3,__this_00);
    __this_01 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo);
    KKEKJDLEJIL___ctor(__this_01,(MethodInfo *)0x0);
    ppKVar4 = &(__this->fields).ALMHAKDJNDJ;
    *ppKVar4 = __this_01;
    thunk_FUN_01c20e04(ppKVar4,__this_01);
    __this_02 = (EventTriggers_o *)thunk_FUN_01bda818(EventTriggers_TypeInfo);
    EventTriggers___ctor(__this_02,(MethodInfo *)0x0);
    ppIVar5 = &(__this->fields).CAGHFDGCFPG;
    *ppIVar5 = __this_02;
    thunk_FUN_01c20e04(ppIVar5,__this_02);
    pSVar6 = (System_Collections_Generic_List_OLKKAIFGGAK__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<Model>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<Model>__ctor__);
    ppSVar7 = &(__this->fields).EHJHKEEDKBE;
    *ppSVar7 = pSVar6;
    thunk_FUN_01c20e04(ppSVar7,pSVar6);
    pSVar6 = (System_Collections_Generic_List_OLKKAIFGGAK__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<Model>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<Model>__ctor__);
    ppSVar7 = &(__this->fields).AGOBPAPPBEM;
    *ppSVar7 = pSVar6;
    thunk_FUN_01c20e04(ppSVar7,pSVar6);
    pSVar6 = (System_Collections_Generic_List_OLKKAIFGGAK__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<Model>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<Model>__ctor__);
    ppSVar7 = &(__this->fields).NCPKMPACJNP;
    *ppSVar7 = pSVar6;
    thunk_FUN_01c20e04(ppSVar7,pSVar6);
    (__this->fields).BDOPOCFLMHL.fields.b = 0.03529412;
    (__this->fields).BDOPOCFLMHL.fields.a = 1.0;
    (__this->fields).BDOPOCFLMHL.fields.r = 0.15686275;
    (__this->fields).BDOPOCFLMHL.fields.g = 0.078431375;
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnAnimationEnd(Action<Model.EAOIGPODIAI> CJNHFNHJHPE)  [RVA 0x3561944]
// Nekki.SF2.Core.Fights.ModelContainer$$remove_OnAnimationEnd @ RVA 0x3561944

void Nekki_SF2_Core_Fights_ModelContainer__remove_OnAnimationEnd
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,
               System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar5;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o **ppSVar6;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *source;
  
  if ((DAT_04568bc9 & 1) == 0) {
    FUN_01bab630(&System_Action<Model_EAOIGPODIAI>_TypeInfo);
    DAT_04568bc9 = 1;
  }
  ppSVar6 = &(__this->fields).LKGKDIMGDHL;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<Model_EAOIGPODIAI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<Model_EAOIGPODIAI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void BDHAMOEKNNK()  [RVA 0x3560B98]
// Nekki.SF2.Core.Fights.ModelContainer$$BDHAMOEKNNK @ RVA 0x3560B98

void Nekki_SF2_Core_Fights_ModelContainer__BDHAMOEKNNK
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar6;
  UnityEngine_GameObject_o *__this_00;
  EventTriggers_o *__this_01;
  MethodInfo *method_00;
  KHEDNGODOIC_o *pKVar7;
  Model_array *pOVar8;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568bca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_get_Count__);
    DAT_04568bca = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).HCDEJEHGGDJ == false) {
    return;
  }
  pSVar6 = (__this->fields).EHJHKEEDKBE;
  if (pSVar6 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__
                             ), pIVar3 = local_60.fields._current, bVar4) {
      if ((__this->fields).JAKNPPAIFCC == false) {
        if ((Model_o *)local_60.fields._current == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar5 = Model__MKIHMHHJLHE
                          ((Model_o *)local_60.fields._current,(MethodInfo *)0x0);
        if (iVar5 != -1) {
          pKVar7 = (__this->fields).ANDGPHHMNMC;
          (__this->fields).JAKNPPAIFCC = true;
          if (pKVar7 == (KHEDNGODOIC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_00 = (pKVar7->fields).LDAKOINICNJ;
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        }
      }
      else if ((Model_o *)local_60.fields._current == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Model__BDHAMOEKNNK((Model_o *)pIVar3,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    pSVar6 = (__this->fields).AGOBPAPPBEM;
    if (pSVar6 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      if (0 < (pSVar6->fields)._size) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)pSVar6,
                   Method_System_Collections_Generic_List<Model>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__
                                 ), pIVar3 = local_60.fields._current, bVar4) {
          if ((Model_o *)local_60.fields._current == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Model__BDHAMOEKNNK((Model_o *)local_60.fields._current,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<Model>_Add__;
          pSVar6 = (__this->fields).EHJHKEEDKBE;
          if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar8 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pOVar8 == (Model_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (pSVar6->fields)._size;
          if (uVar1 < (uint)pOVar8->max_length) {
            (pSVar6->fields)._size = uVar1 + 1;
            pOVar8->m_Items[(int)uVar1] = (Model_o *)pIVar3;
            thunk_FUN_01c20e04(pOVar8->m_Items + (int)uVar1,pIVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,pIVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
        pSVar6 = (__this->fields).AGOBPAPPBEM;
        if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_03660e38;
        iVar5 = (pSVar6->fields)._size;
        (pSVar6->fields)._size = 0;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (0 < iVar5) {
          System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar5,(MethodInfo *)0x0);
        }
      }
      __this_01 = (__this->fields).CAGHFDGCFPG;
      if (__this_01 != (EventTriggers_o *)0x0) {
        EventTriggers__BDHAMOEKNNK(__this_01,(MethodInfo *)0x0);
        pKVar7 = (__this->fields).ANDGPHHMNMC;
        if (pKVar7 != (KHEDNGODOIC_o *)0x0) {
          KHEDNGODOIC__HFCJLBGBGPI(pKVar7,(MethodInfo *)0x0);
          Nekki_SF2_Core_Fights_ModelContainer__PKCCGFBBOFM(__this,method_00);
          return;
        }
      }
    }
  }
LAB_03660e38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnTryOnEnd(Action CJNHFNHJHPE)  [RVA 0x3561C80]
// Nekki.SF2.Core.Fights.ModelContainer$$add_OnTryOnEnd @ RVA 0x3561C80

void Nekki_SF2_Core_Fights_ModelContainer__add_OnTryOnEnd
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04568bcb & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568bcb = 1;
  }
  ppSVar4 = &(__this->fields).NHDEFBNHAKC;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public Vector2 get_ModelPosition()  [RVA 0x3561D1C]
// Nekki.SF2.Core.Fights.ModelContainer$$get_ModelPosition @ RVA 0x3561D1C

UnityEngine_Vector2_o
Nekki_SF2_Core_Fights_ModelContainer__get_ModelPosition
          (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._modelPosition.fields;
}


// ===== private void OJOIFNMHOBI(Model BCKBBGCOMJD, List<InfoAnimation> OGDIBLNHLNL, ModelObject KPHJPLCBKJB, bool GEOFKIAOKDG, bool AEMDLGPAIBH)  [RVA 0x3561D24]
// Nekki.SF2.Core.Fights.ModelContainer$$OJOIFNMHOBI @ RVA 0x3561D24

void Nekki_SF2_Core_Fights_ModelContainer__OJOIFNMHOBI
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_ECENNHNBAME__o *OGDIBLNHLNL,
               ModelObject_o *KPHJPLCBKJB,bool GEOFKIAOKDG,bool AEMDLGPAIBH,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  Model_o *pOVar3;
  ModelObject_o *NCNGALIAHJL;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568bcc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    __this = (Nekki_SF2_Core_Fights_ModelContainer_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    DAT_04568bcc = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((BCKBBGCOMJD != (Model_o *)0x0) &&
     (__this_00 = (BCKBBGCOMJD->fields).OOBBJEDHHKM,
     __this = (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
     __this_00 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                             ), bVar1) {
      if ((InfoAnimation_o *)local_70.fields._current == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      InfoAnimation__AKNCABCJLII
                ((InfoAnimation_o *)local_70.fields._current,KPHJPLCBKJB,GEOFKIAOKDG,AEMDLGPAIBH,
                 KPHJPLCBKJB,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    NCNGALIAHJL = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
    bVar1 = Model__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
    __this = (Nekki_SF2_Core_Fights_ModelContainer_o *)(ulong)bVar1;
    if (OGDIBLNHLNL != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      pOVar3 = (BCKBBGCOMJD->fields).NFMBPIPEKGF;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)OGDIBLNHLNL,
                 Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                          );
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
          return;
        }
        if ((InfoAnimation_o *)local_70.fields._current == (InfoAnimation_o *)0x0) break;
        InfoAnimation__AKNCABCJLII
                  ((InfoAnimation_o *)local_70.fields._current,NCNGALIAHJL,bVar1,
                   pOVar3 != (Model_o *)0x0,NCNGALIAHJL,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void Init(float NMFKJBOAOLK = 0, float DAPHCPICAAC = 0, float DCNKOEOHOPE = 0, float DENHILBKEFB = 0)  [RVA 0x3561F9C]
// Nekki.SF2.Core.Fights.ModelContainer$$Init @ RVA 0x3561F9C

void Nekki_SF2_Core_Fights_ModelContainer__Init
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,float NMFKJBOAOLK,float DAPHCPICAAC,
               float DCNKOEOHOPE,float DENHILBKEFB,MethodInfo *method)

{
  int32_t iVar1;
  MEHKKHFBNLM_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  ModelParameters_o *pPVar3;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  ModelParameters_o **ppPVar4;
  Location_o *pNVar5;
  MEHKKHFBNLM_o **ppMVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar7;
  
  if ((DAT_04568bcd & 1) == 0) {
    FUN_01bab630(&MEHKKHFBNLM_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568bcd = 1;
  }
  Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ(__this,false,in_x2);
  (__this->fields).IBGCIPCGICB = 0;
  (__this->fields).ALBNJDPLOKJ = false;
  if (NMFKJBOAOLK == 0.0) {
    iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    NMFKJBOAOLK = (float)iVar1;
  }
  (__this->fields)._BEEGDJFPEHO_k__BackingField = NMFKJBOAOLK;
  (__this->fields)._IJMMLDDCHFB_k__BackingField = DAPHCPICAAC;
  pNVar5 = (__this->fields).CNHHLPPHNCO;
  pMVar2 = (MEHKKHFBNLM_o *)thunk_FUN_01bda818(MEHKKHFBNLM_TypeInfo);
  MEHKKHFBNLM___ctor(pMVar2,0,(MethodInfo *)0x0);
  if (pNVar5 != (Location_o *)0x0) {
    ppMVar6 = &(pNVar5->fields).CLFNHGGJHCA;
    *ppMVar6 = pMVar2;
    thunk_FUN_01c20e04(ppMVar6,pMVar2);
    pNVar5 = (__this->fields).CNHHLPPHNCO;
    if (((pNVar5 != (Location_o *)0x0) &&
        (pMVar2 = (pNVar5->fields).CLFNHGGJHCA, pMVar2 != (MEHKKHFBNLM_o *)0x0)) &&
       (__this_00 = (pMVar2->fields)._KDDKJJLDFFO_k__BackingField,
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        Nekki_SF2_Core_Fights_ModelContainer__LICIHGOBMAI(__this,method_00);
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pPVar3 = GameUtils__MGLPJIGMCHH((MethodInfo *)0x0);
        ppPVar4 = &(__this->fields).MFLNIMCFPDK;
        *ppPVar4 = pPVar3;
        thunk_FUN_01c20e04(ppPVar4,pPVar3);
        pPVar3 = *ppPVar4;
        if (pPVar3 != (ModelParameters_o *)0x0) {
          (pPVar3->fields).BLJLIBHLGLI = false;
          CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            (false,(MethodInfo *)0x0);
          (pPVar3->fields).DHGNGIKCDON.fields = CVar7;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FixedUpdate()  [RVA 0x3562104]
// Nekki.SF2.Core.Fights.ModelContainer$$FixedUpdate @ RVA 0x3562104

void Nekki_SF2_Core_Fights_ModelContainer__FixedUpdate
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  
  if ((__this->fields).ALBNJDPLOKJ != false) {
    if ((__this->fields).IBGCIPCGICB < 1) {
      Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ(__this,false,in_x2);
      (__this->fields).IBGCIPCGICB = 0;
      (__this->fields).ALBNJDPLOKJ = false;
      method = extraout_x1_00;
    }
    else {
      Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ(__this,true,in_x2);
      method = extraout_x1;
    }
  }
  if (((__this->fields).OHHFPJMIOCP != false) ||
     (bVar1 = UnityEngine_Input__GetKeyDown(0x3d,(MethodInfo *)0x0), method = extraout_x1_01, bVar1)
     ) {
    Nekki_SF2_Core_Fights_ModelContainer__BDHAMOEKNNK(__this,method);
  }
  bVar1 = UnityEngine_Input__GetKeyDown(0x2d,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).OHHFPJMIOCP = (bool_conflict)((__this->fields).OHHFPJMIOCP ^ 1);
  }
  return;
}


// ===== private HOOAAGABMBL DIDHPPFOFHC()  [RVA 0x3560894]
// Nekki.SF2.Core.Fights.ModelContainer$$DIDHPPFOFHC @ RVA 0x3560894

HOOAAGABMBL_o *
Nekki_SF2_Core_Fights_ModelContainer__DIDHPPFOFHC
          (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  HOOAAGABMBL_o *pHVar2;
  KKEKJDLEJIL_o *pKVar3;
  HOOAAGABMBL_o *pHVar4;
  ModelParameters_o *pPVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = __this;
  if ((DAT_04568bce & 1) == 0) {
    auVar6 = FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    DAT_04568bce = 1;
  }
  pHVar2 = auVar6._0_8_;
  pKVar3 = (__this->fields).ALMHAKDJNDJ;
  if ((pKVar3 != (KKEKJDLEJIL_o *)0x0) &&
     (pPVar5 = (__this->fields).MFLNIMCFPDK, pPVar5 != (ModelParameters_o *)0x0)) {
    pHVar2 = (pKVar3->fields).PEMECEBIJDM;
    if (((pHVar2 == (pPVar5->fields).PEMECEBIJDM) &&
        (((pHVar2 = (pKVar3->fields).IIDEPPHFJPA, pHVar2 == (pPVar5->fields).IIDEPPHFJPA &&
          (pHVar2 = (pKVar3->fields).HLAAFCIMBAP, pHVar2 == (pPVar5->fields).HLAAFCIMBAP)) &&
         (pHVar2 = (pKVar3->fields).GCPBHJOPMJE, pHVar2 == (pPVar5->fields).GCPBHJOPMJE)))) &&
       (((pHVar2 = (pKVar3->fields).PNAAPNFPCPI, pHVar2 == (pPVar5->fields).PNAAPNFPCPI &&
         (pHVar2 = (pKVar3->fields).AIDDHEHFBEG, pHVar2 == (pPVar5->fields).AIDDHEHFBEG)) &&
        (pHVar2 = (pKVar3->fields).NBHGHLIPCAP, pHVar2 == (pPVar5->fields).NBHGHLIPCAP)))) {
      bVar1 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
      if ((pPVar5->klass->_2).naturalAligment < bVar1) {
        pHVar2 = (HOOAAGABMBL_o *)0x0;
      }
      else {
        pHVar2 = (HOOAAGABMBL_o *)0x0;
        if ((pPVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)ADGIHFGIFHO_TypeInfo) {
          if (pPVar5 == (ModelParameters_o *)0x0) goto LAB_036609a4;
          pHVar4 = (pKVar3->fields).GFNKONPLPEB;
          pHVar2 = (HOOAAGABMBL_o *)0x0;
          if (pHVar4 != (HOOAAGABMBL_o *)pPVar5[1].klass) {
            pHVar2 = pHVar4;
          }
        }
      }
    }
    return pHVar2;
  }
LAB_036609a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pHVar2,auVar6._8_8_);
}


// ===== public void ResetSlowFramesAcquire()  [RVA 0x35620F8]
// Nekki.SF2.Core.Fights.ModelContainer$$ResetSlowFramesAcquire @ RVA 0x35620F8

void Nekki_SF2_Core_Fights_ModelContainer__ResetSlowFramesAcquire
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  (__this->fields).IBGCIPCGICB = 0;
  (__this->fields).ALBNJDPLOKJ = false;
  return;
}


// ===== private void OnDestroy()  [RVA 0x3562188]
// Nekki.SF2.Core.Fights.ModelContainer$$OnDestroy @ RVA 0x3562188

void Nekki_SF2_Core_Fights_ModelContainer__OnDestroy
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  System_Action_OLKKAIFGGAK__o *pSVar1;
  System_Action_o *CJNHFNHJHPE_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  System_Action_OLKKAIFGGAK__o **ppSVar3;
  MethodInfo *in_x2;
  Model_o **ppOVar4;
  Model_o *pOVar5;
  
  if ((DAT_04568bcf & 1) == 0) {
    FUN_01bab630(&System_Action<Model>_TypeInfo);
    FUN_01bab630(&System_Action<Model_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_Remove__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_CFOFLMBPNOE__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_MDPKLJJENLO__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_MPICEHINPFC__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_NCCFAEMDMKL__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_<>c_JIFONOGEDJI__);
    FUN_01bab630(&Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo);
    DAT_04568bcf = 1;
  }
  Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ(__this,false,in_x2);
  ppOVar4 = &(__this->fields).MAODNBMLDEG;
  pOVar5 = *ppOVar4;
  if (pOVar5 == (Model_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                thunk_FUN_01bda818(System_Action<Model_EAOIGPODIAI>_TypeInfo);
  System_Action<object>___ctor();
  Model__CKHNFICFCKA(pOVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
  pOVar5 = (__this->fields).MAODNBMLDEG;
  pSVar1 = (System_Action_OLKKAIFGGAK__o *)thunk_FUN_01bda818(System_Action<Model>_TypeInfo);
  System_Action<object>___ctor();
  if (pOVar5 != (Model_o *)0x0) {
    Model__EMBAGANBCKF(pOVar5,pSVar1,(MethodInfo *)0x0);
    pOVar5 = (__this->fields).MAODNBMLDEG;
    pSVar1 = (System_Action_OLKKAIFGGAK__o *)thunk_FUN_01bda818(System_Action<Model>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pOVar5 != (Model_o *)0x0) {
      Model__LHMMNGOCLFD(pOVar5,pSVar1,(MethodInfo *)0x0);
      pOVar5 = (__this->fields).MAODNBMLDEG;
      CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pOVar5 != (Model_o *)0x0) {
        Model__FMLFNOKEPPG(pOVar5,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).EHJHKEEDKBE;
        if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)*ppOVar4,
                     Method_System_Collections_Generic_List<Model>_Remove__);
          if (*ppOVar4 != (Model_o *)0x0) {
            Model__PCBMLFDNAOC(*ppOVar4,(MethodInfo *)0x0);
            (__this->fields).MAODNBMLDEG = (Model_o *)0x0;
            thunk_FUN_01c20e04(ppOVar4,0);
            pSVar2 = (__this->fields).EHJHKEEDKBE;
            if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar1 = Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__46_0;
            if (pSVar1 == (System_Action_OLKKAIFGGAK__o *)0x0) {
              if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar1 = (System_Action_OLKKAIFGGAK__o *)
                       thunk_FUN_01bda818(System_Action<Model>_TypeInfo);
              System_Action<object>___ctor();
              ppSVar3 = &Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__46_0
              ;
              *ppSVar3 = pSVar1;
              thunk_FUN_01c20e04(ppSVar3,pSVar1);
            }
            if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
              System_Collections_Generic_List<object>__ForEach
                        ((System_Collections_Generic_List_object__o *)pSVar2,
                         (System_Action_T__o *)pSVar1,
                         Method_System_Collections_Generic_List<Model>_ForEach__);
              pSVar2 = (__this->fields).EHJHKEEDKBE;
              if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                length = (pSVar2->fields)._size;
                (pSVar2->fields)._size = 0;
                (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                if (length < 1) {
                  return;
                }
                System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,
                                    (MethodInfo *)0x0);
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


// ===== private void ECCABGPPFBD(Model DBECHEGNDDN)  [RVA 0x355FDD8]
// Nekki.SF2.Core.Fights.ModelContainer$$ECCABGPPFBD @ RVA 0x355FDD8

void Nekki_SF2_Core_Fights_ModelContainer__ECCABGPPFBD
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,Model_o *DBECHEGNDDN,
               MethodInfo *method)

{
  bool GEOFKIAOKDG;
  bool bVar1;
  MethodInfo *in_x6;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  ModelObject_o *KPHJPLCBKJB;
  System_Collections_Generic_List_ECENNHNBAME__o *OGDIBLNHLNL;
  Model_o *pOVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568bd0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    DAT_04568bd0 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (DBECHEGNDDN != (Model_o *)0x0) {
    KPHJPLCBKJB = (DBECHEGNDDN->fields).HMIAFJALFCJ;
    GEOFKIAOKDG = Model__HODPOCMNNIN(DBECHEGNDDN,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).EHJHKEEDKBE;
    if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      pOVar3 = (DBECHEGNDDN->fields).NFMBPIPEKGF;
      OGDIBLNHLNL = (DBECHEGNDDN->fields).OOBBJEDHHKM;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<Model>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__
                          );
        if (!bVar1) break;
        Nekki_SF2_Core_Fights_ModelContainer__OJOIFNMHOBI
                  ((Nekki_SF2_Core_Fights_ModelContainer_o *)(ulong)bVar1,
                   (Model_o *)local_80.fields._current,OGDIBLNHLNL,KPHJPLCBKJB,GEOFKIAOKDG,
                   pOVar3 != (Model_o *)0x0,in_x6);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__)
      ;
      pSVar2 = (__this->fields).AGOBPAPPBEM;
      if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar2,
                   Method_System_Collections_Generic_List<Model>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while( true ) {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__
                            );
          if (!bVar1) break;
          Nekki_SF2_Core_Fights_ModelContainer__OJOIFNMHOBI
                    ((Nekki_SF2_Core_Fights_ModelContainer_o *)(ulong)bVar1,
                     (Model_o *)local_80.fields._current,OGDIBLNHLNL,KPHJPLCBKJB,GEOFKIAOKDG,
                     pOVar3 != (Model_o *)0x0,in_x6);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool OBHHDEMEHNJ(HOOAAGABMBL EDLIOMNAEFI, HOOAAGABMBL LAPOPEHNEEA)  [RVA 0x3561544]
// Nekki.SF2.Core.Fights.ModelContainer$$OBHHDEMEHNJ @ RVA 0x3561544

bool Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,HOOAAGABMBL_o *EDLIOMNAEFI,
               HOOAAGABMBL_o *LAPOPEHNEEA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((EDLIOMNAEFI != (HOOAAGABMBL_o *)0x0) && (LAPOPEHNEEA != (HOOAAGABMBL_o *)0x0)) {
    __this_00 = (EDLIOMNAEFI->fields)._COIPKAKHDFP_k__BackingField;
    if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Equals
                      (__this_00,(LAPOPEHNEEA->fields)._COIPKAKHDFP_k__BackingField,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}


// ===== public void ResetModelPosition()  [RVA 0x356003C]
// Nekki.SF2.Core.Fights.ModelContainer$$ResetModelPosition @ RVA 0x356003C

void Nekki_SF2_Core_Fights_ModelContainer__ResetModelPosition
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Vector3f_o *__this_00;
  Model_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  
  if ((DAT_04568bd1 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04568bd1 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).MAODNBMLDEG != (Model_o *)0x0) {
    UVar1 = (__this->fields)._modelPosition.fields;
    __this_00 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo,method);
    PHCOHKNFGLE.fields.z = 0.0;
    PHCOHKNFGLE.fields._0_8_ = UVar1;
    Vector3f___ctor(__this_00,PHCOHKNFGLE,(MethodInfo *)0x0);
    __this_01 = (__this->fields).MAODNBMLDEG;
    if (__this_01 != (Model_o *)0x0) {
      Model__GIJICLDDDFO(__this_01,__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void HMDJFLDLPMN(Model BCKBBGCOMJD)  [RVA 0x35611B8]
// Nekki.SF2.Core.Fights.ModelContainer$$HMDJFLDLPMN @ RVA 0x35611B8

void Nekki_SF2_Core_Fights_ModelContainer__HMDJFLDLPMN
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,Model_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  Model_o *__this_01;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_02;
  EventTriggers_o *__this_03;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568bd2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    FUN_01bab630(&OIGAJAKPPEO_TypeInfo);
    FUN_01bab630(&StringLiteral_6325/*"Fight::removeModel - cant find model"*/);
    DAT_04568bd2 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    __this_01 = (BCKBBGCOMJD->fields).NFMBPIPEKGF;
    if (__this_01 != (Model_o *)0x0) {
      bVar1 = (OIGAJAKPPEO_TypeInfo->_2).naturalAligment;
      if (((BCKBBGCOMJD->klass->_2).naturalAligment < bVar1) ||
         ((BCKBBGCOMJD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)OIGAJAKPPEO_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(BCKBBGCOMJD);
      }
      Model__JEPNJBEJCDK(__this_01,(OIGAJAKPPEO_o *)BCKBBGCOMJD,(MethodInfo *)0x0);
    }
    __this_02 = (__this->fields).EHJHKEEDKBE;
    if (__this_02 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<Model>_GetEnumerator__);
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__
                               ), __this_00 = local_48.fields._current, bVar2) {
        if ((Model_o *)local_48.fields._current == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Model__AHFHEPFDOBO
                  ((Model_o *)local_48.fields._current,BCKBBGCOMJD,(MethodInfo *)0x0);
        Model__IKMPJAAFEEA((Model_o *)__this_00,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__)
      ;
      __this_03 = (__this->fields).CAGHFDGCFPG;
      if (__this_03 != (EventTriggers_o *)0x0) {
        EventTriggers__HMDJFLDLPMN(__this_03,BCKBBGCOMJD,(MethodInfo *)0x0);
        Model__GAMIFCKJMKO(BCKBBGCOMJD,(MethodInfo *)0x0);
        Model__PCBMLFDNAOC(BCKBBGCOMJD,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_6325/*"Fight::removeModel - cant find model"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void UpdateModel_Parameters(ModelParameters OKBIKHHKOEN, StageType.HEJHMMBJODB LFHPEEKGNDO, string CNONPGEIGJM)  [RVA 0x3562480]
// Nekki.SF2.Core.Fights.ModelContainer$$UpdateModel_Parameters @ RVA 0x3562480

void Nekki_SF2_Core_Fights_ModelContainer__UpdateModel_Parameters
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,ModelParameters_o *OKBIKHHKOEN,
               int32_t LFHPEEKGNDO,System_String_o *CNONPGEIGJM,MethodInfo *method)

{
  MethodInfo *in_x5;
  
  Nekki_SF2_Core_Fights_ModelContainer__FJHEDBMBEFI
            (__this,(HOOAAGABMBL_o *)0x0,OKBIKHHKOEN,LFHPEEKGNDO,CNONPGEIGJM,in_x5);
  return;
}


// ===== protected void IBMLJFPFOHM(float CJNHFNHJHPE)  [RVA 0x3562494]
// Nekki.SF2.Core.Fights.ModelContainer$$IBMLJFPFOHM @ RVA 0x3562494

void Nekki_SF2_Core_Fights_ModelContainer__IBMLJFPFOHM
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BEEGDJFPEHO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void UpdateModel_ItemInfo(HOOAAGABMBL IKKAMAMLIKA, StageType.HEJHMMBJODB LFHPEEKGNDO, string CNONPGEIGJM)  [RVA 0x356249C]
// Nekki.SF2.Core.Fights.ModelContainer$$UpdateModel_ItemInfo @ RVA 0x356249C

void Nekki_SF2_Core_Fights_ModelContainer__UpdateModel_ItemInfo
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               int32_t LFHPEEKGNDO,System_String_o *CNONPGEIGJM,MethodInfo *method)

{
  ModelParameters_o *JOHFLOEABJL;
  ModelParameters_o *__this_00;
  MethodInfo *in_x5;
  
  if ((DAT_04568bd3 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&ModelParameters_TypeInfo);
    DAT_04568bd3 = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JOHFLOEABJL = GameUtils__MGLPJIGMCHH((MethodInfo *)0x0);
  __this_00 = (ModelParameters_o *)thunk_FUN_01bda818(ModelParameters_TypeInfo);
  ModelParameters___ctor(__this_00,JOHFLOEABJL,(MethodInfo *)0x0);
  Nekki_SF2_Core_Fights_ModelContainer__FJHEDBMBEFI
            (__this,IKKAMAMLIKA,__this_00,LFHPEEKGNDO,CNONPGEIGJM,in_x5);
  return;
}


// ===== private void PKCCGFBBOFM()  [RVA 0x35619F4]
// Nekki.SF2.Core.Fights.ModelContainer$$PKCCGFBBOFM @ RVA 0x35619F4

/* WARNING: Removing unreachable block (ram,0x03661bc4) */
/* WARNING: Removing unreachable block (ram,0x03661b48) */
/* WARNING: Removing unreachable block (ram,0x03661b9c) */

void Nekki_SF2_Core_Fights_ModelContainer__PKCCGFBBOFM
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *GANEIBPLOIA;
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  MethodInfo *in_x3;
  int DPJIDNBJIBG;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568bd4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    DAT_04568bd4 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).NCPKMPACJNP;
  if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    local_70.fields._index = local_a8.fields._index;
    local_70.fields._version = local_a8.fields._version;
    local_70.fields._list = local_a8.fields._list;
    local_70.fields._current = local_a8.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__
                             ), GANEIBPLOIA = local_70.fields._current, bVar1) {
      pSVar2 = (__this->fields).EHJHKEEDKBE;
      if (pSVar2 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<Model>_GetEnumerator__);
      DPJIDNBJIBG = 0;
      local_90.fields._index = local_a8.fields._index;
      local_90.fields._version = local_a8.fields._version;
      local_90.fields._list = local_a8.fields._list;
      local_90.fields._current = local_a8.fields._current;
      while ((bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_90,
                                 Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__
                                ), local_90.fields._current != GANEIBPLOIA && (bVar1))) {
        DPJIDNBJIBG = DPJIDNBJIBG + 1;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_90,Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__)
      ;
      Nekki_SF2_Core_Fights_ModelContainer__OGCMOEOKOJP
                (__this,DPJIDNBJIBG,(Model_o *)GANEIBPLOIA,in_x3);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    pSVar2 = (__this->fields).NCPKMPACJNP;
    if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
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


// ===== private void LPACIEFGEOB(Model BCKBBGCOMJD)  [RVA 0x355FB98]
// Nekki.SF2.Core.Fights.ModelContainer$$LPACIEFGEOB @ RVA 0x355FB98

void Nekki_SF2_Core_Fights_ModelContainer__LPACIEFGEOB
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,Model_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  System_Action_OLKKAIFGGAK__o *pSVar4;
  System_Action_o *CJNHFNHJHPE_00;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  
  if ((DAT_04568bd5 & 1) == 0) {
    FUN_01bab630(&System_Action<Model>_TypeInfo);
    FUN_01bab630(&System_Action<Model_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_CFOFLMBPNOE__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_MDPKLJJENLO__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_MPICEHINPFC__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_NCCFAEMDMKL__);
    DAT_04568bd5 = 1;
  }
  pUVar2 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
    UVar5 = UnityEngine_Camera__ScreenToWorldPoint
                      (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
      iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
        UVar7.fields.x = (float)iVar1;
        UVar7.fields.y = 0.0;
        UVar7.fields.z = 0.0;
        UVar7 = UnityEngine_Camera__ScreenToWorldPoint(pUVar2,UVar7,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar8 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          if (BCKBBGCOMJD != (Model_o *)0x0) {
            Model__PKEJJCMJCEE
                      (BCKBBGCOMJD,UVar5.fields.x - UVar6.fields.x,UVar7.fields.x - UVar8.fields.x,0
                       ,0,(MethodInfo *)0x0);
            CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                          thunk_FUN_01bda818(System_Action<Model_EAOIGPODIAI>_TypeInfo);
            System_Action<object>___ctor();
            Model__NGAJMJGFOKC(BCKBBGCOMJD,CJNHFNHJHPE,(MethodInfo *)0x0);
            pSVar4 = (System_Action_OLKKAIFGGAK__o *)
                     thunk_FUN_01bda818(System_Action<Model>_TypeInfo);
            System_Action<object>___ctor();
            Model__PCOHFCHDCIO(BCKBBGCOMJD,pSVar4,(MethodInfo *)0x0);
            pSVar4 = (System_Action_OLKKAIFGGAK__o *)
                     thunk_FUN_01bda818(System_Action<Model>_TypeInfo);
            System_Action<object>___ctor();
            Model__INNOCFHJLHO(BCKBBGCOMJD,pSVar4,(MethodInfo *)0x0);
            CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            Model__OEEKAHPBKFN(BCKBBGCOMJD,CJNHFNHJHPE_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Model get_PlayerModel()  [RVA 0x3562558]
// Nekki.SF2.Core.Fights.ModelContainer$$get_PlayerModel @ RVA 0x3562558

Model_o *
Nekki_SF2_Core_Fights_ModelContainer__get_PlayerModel
          (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  return (__this->fields).MAODNBMLDEG;
}


// ===== private void GINIGIPIOIL()  [RVA 0x3560F20]
// Nekki.SF2.Core.Fights.ModelContainer$$GINIGIPIOIL @ RVA 0x3560F20

void Nekki_SF2_Core_Fights_ModelContainer__GINIGIPIOIL
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  PKNBJJPHAKI_o *__this_00;
  Model_o *pOVar1;
  KHEDNGODOIC_o *pKVar2;
  
  pKVar2 = (__this->fields).ANDGPHHMNMC;
  if (((pKVar2 != (KHEDNGODOIC_o *)0x0) &&
      (pOVar1 = (__this->fields).MAODNBMLDEG, pOVar1 != (Model_o *)0x0)) &&
     (__this_00 = (pKVar2->fields).BAFJNPPPBMK, __this_00 != (PKNBJJPHAKI_o *)0x0)) {
    PKNBJJPHAKI__OCJCMHLABBF
              (__this_00,(pOVar1->fields).HMIAFJALFCJ,
               (UnityEngine_Color_o)(__this->fields).BDOPOCFLMHL.fields,true,(MethodInfo *)0x0);
    pKVar2 = (__this->fields).ANDGPHHMNMC;
    if (pKVar2 != (KHEDNGODOIC_o *)0x0) {
      KHEDNGODOIC__DFLHLNGDGEP(pKVar2,(__this->fields).MAODNBMLDEG,(MethodInfo *)0x0);
      (__this->fields).HCDEJEHGGDJ = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OLIFIINLMLJ(bool CJNHFNHJHPE)  [RVA 0x35615B8]
// Nekki.SF2.Core.Fights.ModelContainer$$OLIFIINLMLJ @ RVA 0x35615B8

void Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  int32_t CJNHFNHJHPE_00;
  
  if ((DAT_04568bd6 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568bd6 = 1;
  }
  if ((__this->fields).ALBNJDPLOKJ != false) {
    if (CJNHFNHJHPE) {
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CJNHFNHJHPE_00 = GameUtils_TypeInfo->static_fields->PBJPEIOLHPG;
    }
    else {
      CJNHFNHJHPE_00 = 1;
    }
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    GameUtils__EBMJDCJOLDM(CJNHFNHJHPE_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public float get_Height()  [RVA 0x3562560]
// Nekki.SF2.Core.Fights.ModelContainer$$get_Height @ RVA 0x3562560

float Nekki_SF2_Core_Fights_ModelContainer__get_Height
                (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  return (__this->fields)._IJMMLDDCHFB_k__BackingField;
}


// ===== private void Update()  [RVA 0x3562568]
// Nekki.SF2.Core.Fights.ModelContainer$$Update @ RVA 0x3562568

void Nekki_SF2_Core_Fights_ModelContainer__Update
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if ((__this->fields).ALBNJDPLOKJ != false) {
    iVar1 = (__this->fields).IBGCIPCGICB + -1;
    (__this->fields).IBGCIPCGICB = iVar1;
    if (0 < iVar1) {
      (__this->fields).ALBNJDPLOKJ = true;
      return;
    }
    if (iVar1 != 0) {
      (__this->fields).IBGCIPCGICB = 0;
    }
  }
  return;
}


// ===== public List<Model> get_Models()  [RVA 0x356259C]
// Nekki.SF2.Core.Fights.ModelContainer$$get_Models @ RVA 0x356259C

System_Collections_Generic_List_OLKKAIFGGAK__o *
Nekki_SF2_Core_Fights_ModelContainer__get_Models
          (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  return (__this->fields).EHJHKEEDKBE;
}


// ===== private void MDPKLJJENLO(Model GANEIBPLOIA)  [RVA 0x35625A4]
// Nekki.SF2.Core.Fights.ModelContainer$$MDPKLJJENLO @ RVA 0x35625A4

void Nekki_SF2_Core_Fights_ModelContainer__MDPKLJJENLO
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,Model_o *GANEIBPLOIA,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568bd7 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<Model>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    DAT_04568bd7 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).EHJHKEEDKBE;
  if (__this_00 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Model>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__);
    if ((Model_o *)local_48.fields._current == GANEIBPLOIA) break;
  } while (bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).NCPKMPACJNP,
             (Il2CppObject *)GANEIBPLOIA,Method_DJNBJHPDKDP_OFNFOGHFDML<Model>__);
  return;
}


// ===== private void EDIHPONOJPH(ModelParameters OKBIKHHKOEN, string NCNNIIJIELC)  [RVA 0x35609A8]
// Nekki.SF2.Core.Fights.ModelContainer$$EDIHPONOJPH @ RVA 0x35609A8

void Nekki_SF2_Core_Fights_ModelContainer__EDIHPONOJPH
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,ModelParameters_o *OKBIKHHKOEN,
               System_String_o *NCNNIIJIELC,MethodInfo *method)

{
  LKHOKLCLKNH_o *__this_00;
  LFHAMPFFNHB_o *pLVar1;
  Item_o *__this_01;
  HOOAAGABMBL_o *pHVar2;
  ModelParameters_o *extraout_x1;
  ModelParameters_o *pPVar3;
  
  if ((DAT_04568bd8 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568bd8 = 1;
    OKBIKHHKOEN = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,OKBIKHHKOEN);
  }
  __this_00 = GameUtils_TypeInfo->static_fields->DPKGHMMEOMP;
  if (__this_00 != (LKHOKLCLKNH_o *)0x0) {
    pLVar1 = LKHOKLCLKNH__OCJPOBFGHEI(__this_00,NCNNIIJIELC,(MethodInfo *)0x0);
    if (pLVar1 == (LFHAMPFFNHB_o *)0x0) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (__this_01 != (Item_o *)0x0) {
      pHVar2 = Item__CKKIPBAIEMN(__this_01,(pLVar1->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
      pPVar3 = (__this->fields).MFLNIMCFPDK;
      if (pPVar3 != (ModelParameters_o *)0x0) {
        (*(pPVar3->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
                  (pPVar3,(pLVar1->fields).BGHFADDGPAD,pHVar2,
                   (pPVar3->klass->vtable)._9_CGNPHPDFKJG.method);
        pPVar3 = (__this->fields).MFLNIMCFPDK;
        if (pPVar3 != (ModelParameters_o *)0x0) {
          ModelParameters__OBDMCJAPKPJ(pPVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LICIHGOBMAI()  [RVA 0x35607D0]
// Nekki.SF2.Core.Fights.ModelContainer$$LICIHGOBMAI @ RVA 0x35607D0

void Nekki_SF2_Core_Fights_ModelContainer__LICIHGOBMAI
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  KHEDNGODOIC_o *pKVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  KHEDNGODOIC_o **ppKVar2;
  
  if ((DAT_04568bd9 & 1) == 0) {
    FUN_01bab630(&KHEDNGODOIC_TypeInfo);
    DAT_04568bd9 = 1;
    method = extraout_x1;
  }
  ppKVar2 = &(__this->fields).ANDGPHHMNMC;
  if (*ppKVar2 != (KHEDNGODOIC_o *)0x0) {
    Util__JODGPLBHHIA(((*ppKVar2)->fields).LDAKOINICNJ,false,(MethodInfo *)0x0);
    *ppKVar2 = (KHEDNGODOIC_o *)0x0;
    thunk_FUN_01c20e04(ppKVar2,0);
    method = extraout_x1_00;
  }
  pKVar1 = (KHEDNGODOIC_o *)thunk_FUN_01bda818(KHEDNGODOIC_TypeInfo,method);
  KHEDNGODOIC___ctor(pKVar1,(MethodInfo *)0x0);
  *ppKVar2 = pKVar1;
  thunk_FUN_01c20e04(ppKVar2,pKVar1);
  if (*ppKVar2 != (KHEDNGODOIC_o *)0x0) {
    KHEDNGODOIC__GIENGNEGHPJ(*ppKVar2,(__this->fields).CNHHLPPHNCO,(MethodInfo *)0x0);
    pKVar1 = (__this->fields).ANDGPHHMNMC;
    if ((pKVar1 != (KHEDNGODOIC_o *)0x0) &&
       (__this_00 = (pKVar1->fields).LDAKOINICNJ, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int get_ForceSlowFrames()  [RVA 0x3562710]
// Nekki.SF2.Core.Fights.ModelContainer$$get_ForceSlowFrames @ RVA 0x3562710

int32_t Nekki_SF2_Core_Fights_ModelContainer__get_ForceSlowFrames
                  (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  return (__this->fields).IBGCIPCGICB;
}


// ===== private void MPICEHINPFC()  [RVA 0x3562718]
// Nekki.SF2.Core.Fights.ModelContainer$$MPICEHINPFC @ RVA 0x3562718

void Nekki_SF2_Core_Fights_ModelContainer__MPICEHINPFC
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).NHDEFBNHAKC;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03662734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnAnimationEnd(Action<Model.EAOIGPODIAI> CJNHFNHJHPE)  [RVA 0x356273C]
// Nekki.SF2.Core.Fights.ModelContainer$$add_OnAnimationEnd @ RVA 0x356273C

void Nekki_SF2_Core_Fights_ModelContainer__add_OnAnimationEnd
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,
               System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar5;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o **ppSVar6;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *a;
  
  if ((DAT_04568bda & 1) == 0) {
    FUN_01bab630(&System_Action<Model_EAOIGPODIAI>_TypeInfo);
    DAT_04568bda = 1;
  }
  ppSVar6 = &(__this->fields).LKGKDIMGDHL;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<Model_EAOIGPODIAI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<Model_EAOIGPODIAI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void remove_OnTryOnEnd(Action CJNHFNHJHPE)  [RVA 0x35627EC]
// Nekki.SF2.Core.Fights.ModelContainer$$remove_OnTryOnEnd @ RVA 0x35627EC

void Nekki_SF2_Core_Fights_ModelContainer__remove_OnTryOnEnd
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04568bdb & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568bdb = 1;
  }
  ppSVar4 = &(__this->fields).NHDEFBNHAKC;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

