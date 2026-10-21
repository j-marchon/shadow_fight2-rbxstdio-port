// TypeDefIndex 1036
// Namespace: 
// public class OANBNKOOJFH
// Fields:
//   protected OANBNKOOJFH.CGENNMLAMMJ EENEHBKDMMD; // 0x10
//   protected bool PPJLHIJKKEL; // 0x14

// ===== public bool PNMBBPHANIK(bool HPACPFLKHPK)  [RVA 0x30D0868]
// OANBNKOOJFH$$PNMBBPHANIK @ RVA 0x30D0868

bool OANBNKOOJFH__PNMBBPHANIK(OANBNKOOJFH_o *__this,bool HPACPFLKHPK,MethodInfo *method)

{
  return ((__this->fields).PPJLHIJKKEL != false) != HPACPFLKHPK;
}


// ===== protected virtual void HNIHOIAMDPC(XmlNode NHMPCKIPOJE)  [RVA 0x30D0880]
// OANBNKOOJFH$$HNIHOIAMDPC @ RVA 0x30D0880

void OANBNKOOJFH__HNIHOIAMDPC
               (OANBNKOOJFH_o *__this,System_Xml_XmlNode_o *NHMPCKIPOJE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_045662fd & 1) == 0) {
    FUN_01bab630(&StringLiteral_9577/*"Not"*/);
    DAT_045662fd = 1;
  }
  if (NHMPCKIPOJE != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                          (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9577/*"Not"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      (__this->fields).PPJLHIJKKEL = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(OANBNKOOJFH.CGENNMLAMMJ ACCIHBHMFPN)  [RVA 0x30D0904]
// OANBNKOOJFH$$.ctor @ RVA 0x30D0904

void OANBNKOOJFH___ctor(OANBNKOOJFH_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).EENEHBKDMMD = ACCIHBHMFPN;
  return;
}


// ===== public virtual void ENMHDGDKLJD()  [RVA 0x30D092C]
// OANBNKOOJFH$$ENMHDGDKLJD @ RVA 0x30D092C

void OANBNKOOJFH__ENMHDGDKLJD(OANBNKOOJFH_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual bool EPBENPDCBFE(IFBJEEAJGEO AHEFOIOKDOK)  [RVA 0x30D0930]
// OANBNKOOJFH$$EPBENPDCBFE @ RVA 0x30D0930

bool OANBNKOOJFH__EPBENPDCBFE(OANBNKOOJFH_o *__this,IFBJEEAJGEO_o *AHEFOIOKDOK,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_045662fe & 1) == 0) {
    FUN_01bab630(&OANBNKOOJFH_CGENNMLAMMJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5584/*"ERROR: Unknown condition type checked: {0}"*/);
    DAT_045662fe = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  local_24 = (__this->fields).EENEHBKDMMD;
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(OANBNKOOJFH_CGENNMLAMMJ_TypeInfo,&local_24);
  if (args != (System_Object_array *)0x0) {
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar1;
      thunk_FUN_01c20e04(args->m_Items,pIVar1);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_5584/*"ERROR: Unknown condition type checked: {0}"*/,args,(MethodInfo *)0x0);
      return false;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

