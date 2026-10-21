// AFFHKININGD$$HKBKHKMMBFG @ RVA 0x333FE84

void AFFHKININGD__HKBKHKMMBFG(AFFHKININGD_o *__this,PAMEPBLOLPB_o *CJNHFNHJHPE,MethodInfo *method)

{
  AFFHKININGD_o **ppAVar1;
  PAMEPBLOLPB_o **ppPVar2;
  
  ppPVar2 = &(__this->fields).JPBIBBBMCCD;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fe2c with catch @ 0343fe84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fe0c with catch @ 0343fe88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fddc with catch @ 0343fe8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fdf0 with catch @ 0343fe90
                        */
  *ppPVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppPVar2);
  if (*ppPVar2 != (PAMEPBLOLPB_o *)0x0) {
    ppAVar1 = &((*ppPVar2)->fields).JFFPIOMOOPF;
                    /* try { // try from 0343fea8 to 0353feab has its CatchHandler @ 0343fecc */
    *ppAVar1 = __this;
                    /* try { // try from 0343feac to 0353fed3 has its CatchHandler @ 0343fc9c */
    thunk_FUN_01c20e04(ppAVar1,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

