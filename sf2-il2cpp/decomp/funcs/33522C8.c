// PFOMHOLCODE$$MJGLDMPHGBB @ RVA 0x33522C8

void PFOMHOLCODE__MJGLDMPHGBB(PFOMHOLCODE_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t MFDCCBAJNIO;
  
  if ((DAT_04567a1b & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04567a1b = 1;
  }
  if ((__this->fields).EFJJMEENDAO != false) {
    return;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    MFDCCBAJNIO = 0;
  }
  else {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int32_t *)thunk_FUN_01bda96c();
    MFDCCBAJNIO = *piVar1;
  }
  PFOMHOLCODE__MJGLDMPHGBB(__this,MFDCCBAJNIO,method);
  return;
}

