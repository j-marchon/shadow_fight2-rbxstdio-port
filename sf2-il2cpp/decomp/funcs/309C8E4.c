// Nekki.SF2.GUI.Fight.EndFightContent$$KAJJINHAMII @ RVA 0x309C8E4

System_ValueTuple_long__long__o
Nekki_SF2_GUI_Fight_EndFightContent__KAJJINHAMII
          (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,int64_t DCDLMCEEOCC,MethodInfo *method)

{
  System_ValueTuple_long__long__Fields SVar1;
  ulong uVar2;
  MethodInfo_2BCC0B0 *in_x4;
  int iVar3;
  System_ValueTuple_long__long__o __this_00;
  int64_t local_30;
  int64_t iStack_28;
  
  if ((DAT_04566123 & 1) == 0) {
    FUN_01bab630(&Method_System_ValueTuple<long,_long>__ctor__);
    DAT_04566123 = 1;
  }
  if (DCDLMCEEOCC < 1000) {
    uVar2 = 0;
  }
  else {
    iVar3 = (int)DCDLMCEEOCC;
    if (DCDLMCEEOCC < 1000000) {
      uVar2 = DCDLMCEEOCC & 0xffffffff;
      DCDLMCEEOCC = uVar2 / 1000;
      uVar2 = (ulong)(iVar3 + (int)(uVar2 / 1000) * -1000 & 0xffff) / 10;
    }
    else if (DCDLMCEEOCC < 1000000000) {
      uVar2 = DCDLMCEEOCC & 0xffffffff;
      DCDLMCEEOCC = uVar2 / 1000000;
      uVar2 = (ulong)(uint)(iVar3 + (int)(uVar2 / 1000000) * -1000000) / 10000;
    }
    else {
      DCDLMCEEOCC = (ulong)DCDLMCEEOCC / 1000000000;
      uVar2 = (ulong)(uint)(iVar3 + (int)DCDLMCEEOCC * -1000000000) / 10000000;
    }
  }
  local_30 = 0;
  iStack_28 = 0;
  __this_00.fields.Item2 = DCDLMCEEOCC;
  __this_00.fields.Item1 = (int64_t)&local_30;
  System_ValueTuple<long,_long>___ctor
            (__this_00,uVar2,Method_System_ValueTuple<long,_long>__ctor__,in_x4);
  SVar1.Item2 = iStack_28;
  SVar1.Item1 = local_30;
  return (System_ValueTuple_long__long__o)SVar1;
}

