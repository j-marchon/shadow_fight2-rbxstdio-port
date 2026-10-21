// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionModelMirrored  (obfuscated IENCDFELNPO)
// TypeDefIndex 1658
// Namespace: 
// public class ConditionModelMirrored : ConditionAnimation
// Fields:

// ===== private bool BCHIHFCJBHO(Model BCKBBGCOMJD, InfoAnimation NLEBDPHNIDI)  [RVA 0x31C6A1C]
// ConditionModelMirrored$$BCHIHFCJBHO @ RVA 0x31C6A1C

bool ConditionModelMirrored__BCHIHFCJBHO
               (ConditionModelMirrored_o *__this,Model_o *BCKBBGCOMJD,InfoAnimation_o *NLEBDPHNIDI,
               MethodInfo *method)

{
  int32_t OAFGMHOFEKM;
  bool bVar1;
  InfoAnimation_MNDFKOHIAHI_o *__this_00;
  System_String_o *FMFIHPBNGBJ;
  UnityEngine_Vector3_array *PDCJPCDLHCI;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  ModelAnimation_o *pOVar5;
  ModelObject_o *KCLAGHLLOME;
  int32_t local_24;
  
  if ((DAT_04566c37 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4570/*"ConditionModelMirrored: getMirror - wrong type: {0}"*/);
    DAT_04566c37 = 1;
  }
  if ((__this->fields).super.LOAFPIOGJAF == 1) {
    if (((BCKBBGCOMJD != (Model_o *)0x0) && (NLEBDPHNIDI != (InfoAnimation_o *)0x0)) &&
       (__this_00 = (NLEBDPHNIDI->fields).FGEAOBODDAP, __this_00 != (InfoAnimation_MNDFKOHIAHI_o *)0x0
       )) {
      KCLAGHLLOME = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
      FMFIHPBNGBJ = InfoAnimation_MNDFKOHIAHI__LELBMBHAPOM(__this_00,(MethodInfo *)0x0);
      pOVar5 = (BCKBBGCOMJD->fields).OAKOFJJIOFF;
      if (pOVar5 != (ModelAnimation_o *)0x0) {
        OAFGMHOFEKM = (pOVar5->fields).DMJAJGGGHPF;
        PDCJPCDLHCI = InfoAnimation__GPCDFCAEPKK(NLEBDPHNIDI,(MethodInfo *)0x0);
        bVar1 = ModelAnimation__NGILHAOFGEA
                          (KCLAGHLLOME,FMFIHPBNGBJ,OAFGMHOFEKM,PDCJPCDLHCI,false,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  else {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (__this->fields).super.LOAFPIOGJAF;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items,pIVar2);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_4570/*"ConditionModelMirrored: getMirror - wrong type: {0}"*/,args,(MethodInfo *)0x0);
        return false;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(Model BCKBBGCOMJD, InfoAnimation NLEBDPHNIDI)  [RVA 0x31C6BA8]
// ConditionModelMirrored$$EPBENPDCBFE @ RVA 0x31C6BA8

bool ConditionModelMirrored__EPBENPDCBFE
               (ConditionModelMirrored_o *__this,Model_o *BCKBBGCOMJD,InfoAnimation_o *NLEBDPHNIDI,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = ConditionModelMirrored__BCHIHFCJBHO(__this,BCKBBGCOMJD,NLEBDPHNIDI,method);
  return bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31C6BD0]
// ConditionModelMirrored$$.ctor @ RVA 0x31C6BD0

void ConditionModelMirrored___ctor(ConditionModelMirrored_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,0x13,(MethodInfo *)0x0);
  return;
}

