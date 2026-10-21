// ACBCKKIEOCE$$DIGLGKAPOAB @ RVA 0x3583400

void ACBCKKIEOCE__DIGLGKAPOAB(ACBCKKIEOCE_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  CBOEGGBIJMD_o *__this_00;
  HBOAEOEEDEN_o *__this_01;
  HBOAEOEEDEN_o **ppHVar2;
  MethodInfo *method_00;
  Il2CppClass *pIVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04568ce1 & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&HBOAEOEEDEN_TypeInfo);
    DAT_04568ce1 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  fVar4 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  __this_00 = (__this->fields).EDMFBKICBPB;
  if (((__this_00 != (CBOEGGBIJMD_o *)0x0) &&
      (CBOEGGBIJMD__KODPCEDBEEP(__this_00,(int)(fVar4 * 100000.0),(MethodInfo *)0x0),
      IMMNELPBGIF != (Il2CppObject *)0x0)) &&
     (pIVar3 = IMMNELPBGIF[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
    fVar5 = *(float *)&(pIVar3->_1).this_arg.field_0xc;
    fVar4 = *(float *)&(pIVar3->_1).element_class;
    fVar6 = *(float *)&(__this->fields).super.field_0x5c;
    (__this->fields).EKEJMKEFJIO = 0;
    (__this->fields).JAAGMIKHEPA = 0.0;
    fVar4 = fVar4 * 0.5;
    fVar6 = fVar6 * 0.5;
    (__this->fields).BJKHPKFDGEE = (fVar5 - fVar4) + fVar6;
    (__this->fields).KLEMGCNKPGL = (fVar4 - fVar5) - fVar6;
    (__this->fields).EPBLDDIIKFF = false;
    __this_01 = (HBOAEOEEDEN_o *)thunk_FUN_01bda818(HBOAEOEEDEN_TypeInfo);
    HBOAEOEEDEN___ctor(__this_01,__this,(MethodInfo *)0x0);
    ppHVar2 = &(__this->fields).CFFCMDGCPOC;
    *ppHVar2 = __this_01;
    thunk_FUN_01c20e04(ppHVar2,__this_01);
    ACBCKKIEOCE__HDDCMANACEF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

