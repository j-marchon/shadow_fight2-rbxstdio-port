// LEGDPJHPEOB$$IIPMBCPINCC @ RVA 0x354C470

bool LEGDPJHPEOB__IIPMBCPINCC(LEGDPJHPEOB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  MethodInfo *method_00;
  PKHMIGFEJCL_o **ppPVar3;
  
  if ((DAT_04568b2c & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    DAT_04568b2c = 1;
  }
  ppPVar3 = &(__this->fields).AAJBIMFNMBB;
  *ppPVar3 = AAJBIMFNMBB;
  thunk_FUN_01c20e04(ppPVar3,AAJBIMFNMBB);
  iVar1 = (__this->fields).ACCIHBHMFPN;
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  if (iVar1 == 7) {
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this,(__this->fields).HGLHAHMIGDB,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if (__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      bVar2 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        bVar2 = (__this_00->fields).HNFHNNLOLGK == 1.0;
      }
      else {
        bVar2 = false;
      }
      return bVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
  EILGGBOIMGE__KFMNMGGDHFD
            ((EILGGBOIMGE_o *)__this,(__this->fields).HGLHAHMIGDB,__this_00,false,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  EILGGBOIMGE__KFMNMGGDHFD
            ((EILGGBOIMGE_o *)__this,(__this->fields).NKNANOCKLNG,__this_01,false,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  if ((__this->fields).ACCIHBHMFPN - 8U < 3) {
    bVar2 = LEGDPJHPEOB__DFAGIFLDKAP(__this,__this_00,__this_01,method_00);
    return bVar2;
  }
  bVar2 = LEGDPJHPEOB__NMANJLBNKBG(__this,__this_00,__this_01,method_00);
  return bVar2;
}

