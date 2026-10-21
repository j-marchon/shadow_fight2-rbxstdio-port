// TypeDefIndex 1254
// Namespace: 
// [CompilerGenerated]
// private sealed class KKLJIDJBFEI.HENEPGKDDMB
// Fields:
//   public bool lockScreenState; // 0x10
//   public KKLJIDJBFEI.JDDDAHBOKFG CS$<>8__locals1; // 0x18

// ===== public void .ctor()  [RVA 0x3144A58]
// KKLJIDJBFEI.HENEPGKDDMB$$.ctor @ RVA 0x3144A58

void KKLJIDJBFEI_HENEPGKDDMB___ctor(KKLJIDJBFEI_HENEPGKDDMB_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03244318 with catch @ 03244a58 */
                    /* catch() { ... } // from try @ 032443b4 with catch @ 03244a5c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void NHPBJGCFLJH(bool scopeGranted)  [RVA 0x314A0F8]
// KKLJIDJBFEI.HENEPGKDDMB$$NHPBJGCFLJH @ RVA 0x314A0F8

void KKLJIDJBFEI_HENEPGKDDMB__NHPBJGCFLJH
               (KKLJIDJBFEI_HENEPGKDDMB_o *__this,bool scopeGranted,MethodInfo *method)

{
  undefined8 uVar1;
  NDPMLPGANCI_o *__this_00;
  KKLJIDJBFEI_JDDDAHBOKFG_o *__this_01;
  KKLJIDJBFEI_o *__this_02;
  long lVar2;
  undefined8 *puVar3;
  MethodInfo *method_00;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_045667ac & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&StringLiteral_6888/*"GooglePlayV2 email scope granted"*/);
    DAT_045667ac = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__PHFCKPKDMBK(__this_00,(__this->fields).lockScreenState,true,(MethodInfo *)0x0);
    __this_01 = (__this->fields).CS___8__locals1;
    if (__this_01 != (KKLJIDJBFEI_JDDDAHBOKFG_o *)0x0) {
      if (!scopeGranted) {
        KKLJIDJBFEI_JDDDAHBOKFG__FAMMLJNJPNF(__this_01,method_00);
        return;
      }
      __this_02 = (__this_01->fields).__4__this;
      if (__this_02 != (KKLJIDJBFEI_o *)0x0) {
        KKLJIDJBFEI__FHIODBIPGBG(__this_02,method_00);
        lVar2 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        uVar1 = StringLiteral_6888/*"GooglePlayV2 email scope granted"*/;
        plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
        if (plVar6 != (long *)0x0) {
          lVar2 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(HCOEEOMMEFL_c **)(piVar5 + -2) == HCOEEOMMEFL_TypeInfo) {
                puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                goto LAB_0324a220;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_01b81914(plVar6,HCOEEOMMEFL_TypeInfo,1);
LAB_0324a220:
                    /* WARNING: Could not recover jumptable at 0x0324a238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar6,uVar1,0,puVar3[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

