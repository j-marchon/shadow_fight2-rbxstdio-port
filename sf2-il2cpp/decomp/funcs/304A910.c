// EGMONPGHHDP$$AKDNGOBCGHB @ RVA 0x304A910

int32_t EGMONPGHHDP__AKDNGOBCGHB
                  (EGMONPGHHDP_o *__this,JMDPBFOCHHP_CKEMIAEPGKD_o *CLDEGLBDGGE,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  JMDPBFOCHHP_CKEMIAEPGKD_o *extraout_x1;
  JMDPBFOCHHP_CKEMIAEPGKD_o *method_00;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *__this_00;
  int iVar4;
  
  method_00 = CLDEGLBDGGE;
  if ((DAT_04565e11 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    DAT_04565e11 = 1;
    method_00 = extraout_x1;
  }
  if (CLDEGLBDGGE == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
    return -1;
  }
  iVar2 = EGMONPGHHDP__CJINGJONNEI(__this,(MethodInfo *)method_00);
  __this_00 = (CLDEGLBDGGE->fields).GPNNHMIJLGL;
  if (__this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) {
    iVar4 = -1;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= iVar4 + 1) {
        return iVar1 + -1;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar4 + 1,
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                         );
      if (pIVar3 == (Il2CppObject *)0x0) break;
      if ((long)iVar2 < (long)(ulong)*(uint *)((long)&pIVar3[1].klass + 4)) {
        return iVar4;
      }
      __this_00 = (CLDEGLBDGGE->fields).GPNNHMIJLGL;
      iVar4 = iVar4 + 1;
    } while (__this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

