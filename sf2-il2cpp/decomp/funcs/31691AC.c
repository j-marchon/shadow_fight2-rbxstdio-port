// AFIEAGJGHGK$$BLLEKLPPHBN @ RVA 0x31691AC

void AFIEAGJGHGK__BLLEKLPPHBN(AFIEAGJGHGK_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  
  if ((DAT_045668d6 & 1) == 0) {
    FUN_01bab630(&IBCHOCDIMIP_TypeInfo);
    DAT_045668d6 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (IBCHOCDIMIP_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)IBCHOCDIMIP_TypeInfo)) {
      (__this->fields).KKANPDICHBI = *(int32_t *)&IMMNELPBGIF[2].klass;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

