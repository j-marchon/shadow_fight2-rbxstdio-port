// LEGDPJHPEOB$$GGHIHLMENAC @ RVA 0x35448B4

System_String_array *
LEGDPJHPEOB__GGHIHLMENAC
          (LEGDPJHPEOB_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *CBIGMIHGDFO,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  
  if ((DAT_04568b0e & 1) == 0) {
    FUN_01bab630(&StringLiteral_981);
    FUN_01bab630(&StringLiteral_1100);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_1);
    DAT_04568b0e = 1;
  }
  if ((CBIGMIHGDFO != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
     (pSVar1 = (CBIGMIHGDFO->fields).DFJBJLBLBGB, __this = (LEGDPJHPEOB_o *)0x0,
     pSVar1 != (System_String_o *)0x0)) {
    pSVar1 = System_String__Replace(pSVar1,StringLiteral_981,StringLiteral_1,(MethodInfo *)0x0);
    __this = (LEGDPJHPEOB_o *)0x0;
    if ((pSVar1 != (System_String_o *)0x0) &&
       (pSVar1 = System_String__Replace(pSVar1,StringLiteral_1100,StringLiteral_1,(MethodInfo *)0x0)
       , __this = (LEGDPJHPEOB_o *)0x0, pSVar1 != (System_String_o *)0x0)) {
      pSVar2 = System_String__Split(pSVar1,0x2e,0,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

