// PFOMHOLCODE$$OPANFLOIDFD @ RVA 0x334DC78

void PFOMHOLCODE__OPANFLOIDFD
               (PFOMHOLCODE_AJMCKEHMEOD_o *KDCIFIDLLKH,PKHMIGFEJCL_o *OKBIKHHKOEN,bool *EBCJGGKJBMO,
               bool *NHLOHJKADOM,System_String_o **DCGNGBCHACL,System_String_o **PKDHNJNKPIK,
               bool *BIALOIGFPHJ,MethodInfo *method)

{
  bool bVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this;
  LEGDPJHPEOB_o *__this_00;
  PKHMIGFEJCL_o **ppPVar2;
  System_String_o **ppSVar3;
  
  if ((DAT_04567a14 & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567a14 = 1;
  }
  *EBCJGGKJBMO = KDCIFIDLLKH != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0;
  *NHLOHJKADOM = false;
  if (KDCIFIDLLKH == (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
    ppSVar3 = &StringLiteral_1;
    *DCGNGBCHACL = StringLiteral_1;
    thunk_FUN_01c20e04(DCGNGBCHACL);
  }
  else {
    *DCGNGBCHACL = (KDCIFIDLLKH->fields).ABCHAOKFLGL;
    thunk_FUN_01c20e04(DCGNGBCHACL);
    ppSVar3 = &(KDCIFIDLLKH->fields).CMKKMKONDHG;
  }
  *PKDHNJNKPIK = *ppSVar3;
  thunk_FUN_01c20e04(PKDHNJNKPIK);
  *BIALOIGFPHJ = false;
  if (KDCIFIDLLKH == (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
    return;
  }
  *BIALOIGFPHJ = (KDCIFIDLLKH->fields).NAMPJLCANNG;
  __this = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar2 = &(__this_00->fields).AAJBIMFNMBB;
    *ppPVar2 = OKBIKHHKOEN;
    thunk_FUN_01c20e04(ppPVar2,OKBIKHHKOEN);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(KDCIFIDLLKH->fields).HOKHAHEGMAB,__this,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if (__this != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      bVar1 = Util__DJAEMCOEKOI((__this->fields).HNFHNNLOLGK,1.0,1.000000013351432e-10,
                                (MethodInfo *)0x0);
      *NHLOHJKADOM = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

