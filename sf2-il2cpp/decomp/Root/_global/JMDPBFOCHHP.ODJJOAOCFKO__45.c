// TypeDefIndex 45
// Namespace: 
// public class JMDPBFOCHHP.ODJJOAOCFKO
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   private string APBICPEOMOM; // 0x18
//   private string JNGEDEBBMNP; // 0x20
//   public string KPDPJONADPJ; // 0x28
//   public string PCAIPKLGAHP; // 0x30
//   public string EJEPJCHIGFE; // 0x38

// ===== public string CPKIMMEEOCF()  [RVA 0x2FFAD34]
// JMDPBFOCHHP.ODJJOAOCFKO$$CPKIMMEEOCF @ RVA 0x2FFAD34

System_String_o *
JMDPBFOCHHP_ODJJOAOCFKO__CPKIMMEEOCF(JMDPBFOCHHP_ODJJOAOCFKO_o *__this,MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  undefined8 uVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04565acc & 1) == 0) {
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_19790/*"name: {0} icon: {1} hint: {2} hintfull: {3}"*/);
    DAT_04565acc = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar3 = (__this->fields).JIJLBFGKNJK;
  if ((pSVar3 != (System_String_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_030fae88:
    uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar2,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar3;
    thunk_FUN_01c20e04(args->m_Items,pSVar3);
    pSVar3 = (__this->fields).APBICPEOMOM;
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar1 == 0))
    goto LAB_030fae88;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar3;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar3);
      pSVar3 = (__this->fields).PCAIPKLGAHP;
      if ((pSVar3 != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar1 == 0))
      goto LAB_030fae88;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)pSVar3;
        thunk_FUN_01c20e04(args->m_Items + 2,pSVar3);
        pSVar3 = (__this->fields).EJEPJCHIGFE;
        if ((pSVar3 != (System_String_o *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar1 == 0))
        goto LAB_030fae88;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)pSVar3;
          thunk_FUN_01c20e04(args->m_Items + 3,pSVar3);
          pSVar3 = System_String__Format(StringLiteral_19790/*"name: {0} icon: {1} hint: {2} hintfull: {3}"*/,args,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public string DNOMHOGFIFO()  [RVA 0x2FFAE98]
// JMDPBFOCHHP.ODJJOAOCFKO$$DNOMHOGFIFO @ RVA 0x2FFAE98

System_String_o *
JMDPBFOCHHP_ODJJOAOCFKO__DNOMHOGFIFO(JMDPBFOCHHP_ODJJOAOCFKO_o *__this,MethodInfo *method)

{
  return (__this->fields).APBICPEOMOM;
}


// ===== public string DIKEKMIHJHK()  [RVA 0x2FFAEA0]
// JMDPBFOCHHP.ODJJOAOCFKO$$DIKEKMIHJHK @ RVA 0x2FFAEA0

System_String_o *
JMDPBFOCHHP_ODJJOAOCFKO__DIKEKMIHJHK(JMDPBFOCHHP_ODJJOAOCFKO_o *__this,MethodInfo *method)

{
  return (__this->fields).JNGEDEBBMNP;
}


// ===== public void FFHJDGPNCKJ(string CJNHFNHJHPE)  [RVA 0x2FFAEA8]
// JMDPBFOCHHP.ODJJOAOCFKO$$FFHJDGPNCKJ @ RVA 0x2FFAEA8

void JMDPBFOCHHP_ODJJOAOCFKO__FFHJDGPNCKJ
               (JMDPBFOCHHP_ODJJOAOCFKO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).APBICPEOMOM = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x2FFAEB0]
// JMDPBFOCHHP.ODJJOAOCFKO$$.ctor @ RVA 0x2FFAEB0

void JMDPBFOCHHP_ODJJOAOCFKO___ctor(JMDPBFOCHHP_ODJJOAOCFKO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void KEFGFJLBHFA(string CJNHFNHJHPE)  [RVA 0x2FFAEB8]
// JMDPBFOCHHP.ODJJOAOCFKO$$KEFGFJLBHFA @ RVA 0x2FFAEB8

void JMDPBFOCHHP_ODJJOAOCFKO__KEFGFJLBHFA
               (JMDPBFOCHHP_ODJJOAOCFKO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).JNGEDEBBMNP = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

