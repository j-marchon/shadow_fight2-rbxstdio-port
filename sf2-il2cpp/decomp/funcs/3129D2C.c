// CPAJCJHOLEJ$$JOIJDAIICIP @ RVA 0x3129D2C

void CPAJCJHOLEJ__JOIJDAIICIP(CPAJCJHOLEJ_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  OPNFCOGALLI_o *pOVar2;
  
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    method_00 = (MethodInfo *)
                CPAJCJHOLEJ__JHBMNNPHEPD(__this,(BCKBBGCOMJD->fields).FNEAAHOOHAA,method);
    if (method_00 != (MethodInfo *)0x0) {
      if (method_00 != (MethodInfo *)(__this->fields).GDEGFMOJMMN) {
        (__this->fields).GDEGFMOJMMN = (NJPBHDMCLIN_KLLGIFHMMIP_o *)method_00;
        thunk_FUN_01c20e04();
        CPAJCJHOLEJ__BMHCAPDENBL(__this,method_01);
        method_00 = extraout_x1;
      }
      if ((__this->fields).NGMDFNDFLFL != false) {
        pOVar2 = (BCKBBGCOMJD->fields).OAKOFJJIOFF;
        if (pOVar2 == (OPNFCOGALLI_o *)0x0) goto LAB_03229dc0;
        bVar1 = (pOVar2->fields).IOGCGDKKILK;
        if ((__this->fields).MKDMJMPDKDK != bVar1) {
          if (bVar1 == false) {
            CPAJCJHOLEJ__BMHCAPDENBL(__this,method_00);
            (__this->fields).MKDMJMPDKDK = false;
          }
          else {
            CPAJCJHOLEJ__CGPGHOGPJBM(__this,BCKBBGCOMJD,method);
            (__this->fields).MKDMJMPDKDK = true;
          }
        }
      }
    }
    return;
  }
LAB_03229dc0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

