// OLKKAIFGGAK$$EAOLDIFFJJL @ RVA 0x34EA618

float OLKKAIFGGAK__EAOLDIFFJJL
                (OLKKAIFGGAK_o *__this,bool GAIHCJLFCAA,System_String_o *NFIICLCMEHI,
                float MKANNAKGEEC,MethodInfo *method)

{
  FPLCEOJCPOD_o *__this_00;
  PJKHAJKEHEL_o *pPVar1;
  float fVar2;
  int32_t local_14;
  
  fVar2 = 1.0;
  if (GAIHCJLFCAA) {
    local_14 = 0;
    pPVar1 = (__this->fields).FAPMJJBOFEF;
    if ((pPVar1 == (PJKHAJKEHEL_o *)0x0) ||
       (__this_00 = (pPVar1->fields).ACHJNNOKEDK, __this_00 == (FPLCEOJCPOD_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    FPLCEOJCPOD__KNMENIBLFGF(__this_00,NFIICLCMEHI,&local_14,true,false,(MethodInfo *)0x0);
    fVar2 = exp2f((float)local_14 * MKANNAKGEEC);
  }
  return fVar2;
}

