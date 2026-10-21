// EINKKMIHCHI$$FOGOMNAOMBD @ RVA 0x34C7B88

void EINKKMIHCHI__FOGOMNAOMBD(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  MethodInfo *extraout_x1;
  GPFMGALHFJK_o *pGVar2;
  
  if ((DAT_04568649 & 1) == 0) {
    FUN_01bab630(&System_Action<IAchievement[]>_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_KILLFKNHDAO__);
    DAT_04568649 = 1;
    method = extraout_x1;
  }
  pGVar2 = (__this->fields).KAKIHIMNDAE;
  uVar1 = thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo,method);
  System_Action<object>___ctor();
  if (pGVar2 != (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c7c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar2->klass->vtable)._36_NGICBBAGDJE.methodPtr)
              (pGVar2,uVar1,(pGVar2->klass->vtable)._36_NGICBBAGDJE.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

