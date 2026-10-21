// TypeDefIndex 2394
// Namespace: 
// [CompilerGenerated]
// private sealed class EBBCMCKFDAE.EOHLEBFINNA
// Fields:
//   public Action<ValueTuple<MPAKDCNMLEG, int, int>> h; // 0x10

// ===== internal void PALKMCAFBFG(MPAKDCNMLEG ad, int currentViews, int maxViews)  [RVA 0x333301C]
// EBBCMCKFDAE.EOHLEBFINNA$$PALKMCAFBFG @ RVA 0x333301C

void EBBCMCKFDAE_EOHLEBFINNA__PALKMCAFBFG
               (EBBCMCKFDAE_EOHLEBFINNA_o *__this,int32_t ad,int32_t currentViews,int32_t maxViews,
               MethodInfo *method)

{
  MethodInfo_2BD8060 *in_x5;
  System_Action_ValueTuple_MPAKDCNMLEG__int__int___o *pSVar1;
  System_ValueTuple_Int32Enum__int__int__o __this_00;
  undefined8 local_50;
  undefined4 local_48;
  
  if ((DAT_0456792b & 1) == 0) {
    FUN_01bab630(&Method_System_ValueTuple<MPAKDCNMLEG,_int,_int>__ctor__);
    DAT_0456792b = 1;
  }
  pSVar1 = (__this->fields).h;
  local_48 = 0;
  local_50 = 0;
  __this_00.fields.Item3 = ad;
  __this_00.fields._0_8_ = &local_50;
  System_ValueTuple<Int32Enum,_int,_int>___ctor
            (__this_00,currentViews,maxViews,
             (int32_t)Method_System_ValueTuple<MPAKDCNMLEG,_int,_int>__ctor__,in_x5);
  if (pSVar1 != (System_Action_ValueTuple_MPAKDCNMLEG__int__int___o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,local_50,local_48,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x333295C]
// EBBCMCKFDAE.EOHLEBFINNA$$.ctor @ RVA 0x333295C

void EBBCMCKFDAE_EOHLEBFINNA___ctor(EBBCMCKFDAE_EOHLEBFINNA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

