// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionDirection  (obfuscated NBOACIABNIG)
// TypeDefIndex 490
// Namespace: 
// public class ConditionDirection : ConditionAnimation
// Fields:
//   public InfoAnimation.HJPFANEPGJF.FFGJMEOGPEA MAJHBNINPDI; // 0x28

// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3583CA8]
// ConditionDirection$$EPBENPDCBFE @ RVA 0x3583CA8

bool ConditionDirection__EPBENPDCBFE(ConditionDirection_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *__this_00;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  int32_t iVar6;
  int32_t local_24;
  
  if ((DAT_04568ce8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4563/*"ConditionDirection::isEqual ERROR - unsupported model type: {0}"*/);
    DAT_04568ce8 = 1;
  }
  __this_00 = (__this->fields).MAJHBNINPDI;
  if (__this_00 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) {
    iVar2 = InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA__MKONAIENMCI
                      (__this_00,AHEFOIOKDOK,(MethodInfo *)0x0);
    iVar1 = (__this->fields).super.LOAFPIOGJAF;
    if (iVar1 == 3) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03683e20;
      iVar6 = (AHEFOIOKDOK->fields).KBBLBDCCAGA;
    }
    else if (iVar1 == 2) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03683e20;
      iVar6 = (AHEFOIOKDOK->fields).HIHFGHGCMKH;
    }
    else if (iVar1 == 1) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03683e20;
      iVar6 = (AHEFOIOKDOK->fields).HIHFJJOMDBF;
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).super.LOAFPIOGJAF;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) goto LAB_03683e20;
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar3;
      thunk_FUN_01c20e04(args->m_Items,pIVar3);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_4563/*"ConditionDirection::isEqual ERROR - unsupported model type: {0}"*/,args,(MethodInfo *)0x0);
      iVar6 = 1;
    }
    return (iVar2 == iVar6) != ((__this->fields).super.GBBHFPBFOPI != false);
  }
LAB_03683e20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KHKLLNFCMME(ModelObject NCNGALIAHJL, bool FOFCAILEKJD, ModelNode IIBPJLKGEBP, bool BHKCLMLKLNB, ModelObject CHBJNMMEAPG)  [RVA 0x3583E34]
// ConditionDirection$$KHKLLNFCMME @ RVA 0x3583E34

void ConditionDirection__KHKLLNFCMME
               (ConditionDirection_o *__this,ModelObject_o *NCNGALIAHJL,bool FOFCAILEKJD,
               ModelNode_o *IIBPJLKGEBP,bool BHKCLMLKLNB,ModelObject_o *CHBJNMMEAPG,
               MethodInfo *method)

{
  DistancePoint_o *pPVar1;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar2;
  
  pEVar2 = (__this->fields).MAJHBNINPDI;
  if ((pEVar2 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) &&
     (pPVar1 = (pEVar2->fields).DBNCGNGNGNM, pPVar1 != (DistancePoint_o *)0x0)) {
    DistancePoint__KEAKEIPABPP
              (pPVar1,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,CHBJNMMEAPG,(MethodInfo *)0x0)
    ;
    pEVar2 = (__this->fields).MAJHBNINPDI;
    if ((pEVar2 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) &&
       (pPVar1 = (pEVar2->fields).OCNJNIOMPMJ, pPVar1 != (DistancePoint_o *)0x0)) {
      DistancePoint__KEAKEIPABPP
                (pPVar1,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,CHBJNMMEAPG,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void ENEJIHFIBFM(LCAJGLLBBEC.ELJAALFNLIP ACCIHBHMFPN)  [RVA 0x3583EBC]
// ConditionDirection$$ENEJIHFIBFM @ RVA 0x3583EBC

void ConditionDirection__ENEJIHFIBFM(ConditionDirection_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3583EC0]
// ConditionDirection$$.ctor @ RVA 0x3583EC0

void ConditionDirection___ctor(ConditionDirection_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar1;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o **ppEVar2;
  
  if ((DAT_04568ce9 & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    DAT_04568ce9 = 1;
  }
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,0x15,(MethodInfo *)0x0);
  if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = MovesCompiler__COCMBLDPDIM(AHDGNOJPPIB,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).MAJHBNINPDI;
  *ppEVar2 = pEVar1;
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
  return;
}


// ===== public void JBICKKIBGDI()  [RVA 0x3583F44]
// ConditionDirection$$JBICKKIBGDI @ RVA 0x3583F44

void ConditionDirection__JBICKKIBGDI(ConditionDirection_o *__this,MethodInfo *method)

{
  DistancePoint_o *pPVar1;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar2;
  
  pEVar2 = (__this->fields).MAJHBNINPDI;
  if ((pEVar2 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) &&
     (pPVar1 = (pEVar2->fields).DBNCGNGNGNM, pPVar1 != (DistancePoint_o *)0x0)) {
    DistancePoint__NODBBDLAIHD(pPVar1,(MethodInfo *)0x0);
    pEVar2 = (__this->fields).MAJHBNINPDI;
    if ((pEVar2 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) &&
       (pPVar1 = (pEVar2->fields).OCNJNIOMPMJ, pPVar1 != (DistancePoint_o *)0x0)) {
      DistancePoint__NODBBDLAIHD(pPVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override Model BMADCIAHJFL(Model GPMNJBOFODO, LCAJGLLBBEC.ELJAALFNLIP ACCIHBHMFPN)  [RVA 0x3583F84]
// ConditionDirection$$BMADCIAHJFL @ RVA 0x3583F84

Model_o *
ConditionDirection__BMADCIAHJFL
          (ConditionDirection_o *__this,Model_o *GPMNJBOFODO,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  return GPMNJBOFODO;
}

