// TypeDefIndex 2045
// Namespace: 
// public class IELOCGKAGEO : QuestAction
// Fields:

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x32AA3A4]
// IELOCGKAGEO$$MAHFCKJGBPP @ RVA 0x32AA3A4

void IELOCGKAGEO__MAHFCKJGBPP(IELOCGKAGEO_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  KAKGABBLHGP_o *__this_00;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  
  if ((DAT_0456742a & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<PackType>__);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    DAT_0456742a = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  lVar2 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar1 = Method_System_Array_Empty<PackType>__;
  lVar4 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
  plVar7 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  if (lVar4 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<PackType>__);
    lVar4 = *(long *)(lVar1 + 0x38);
  }
  lVar2 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar2 + 0xb8);
  __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
  KAKGABBLHGP___ctor(__this_00,true,LFADLKGPBHC,(MethodInfo *)0x0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar2 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(JNDFOKIMHPB_c **)(piVar6 + -2) == JNDFOKIMHPB_TypeInfo) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_033aa518;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01b81914(plVar7,JNDFOKIMHPB_TypeInfo,0);
LAB_033aa518:
  (*(code *)*puVar3)(plVar7,__this_00,0,puVar3[1]);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x32AA548]
// IELOCGKAGEO$$.ctor @ RVA 0x32AA548

void IELOCGKAGEO___ctor(IELOCGKAGEO_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

