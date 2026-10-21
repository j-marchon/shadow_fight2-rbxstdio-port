// NHPEALHAHOA$$JKIMOHDDGKI @ RVA 0x32FDE08

int32_t NHPEALHAHOA__JKIMOHDDGKI
                  (System_Collections_Generic_List_NHPEALHAHOA__o *MCLJFDHDMOD,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_04567705 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
    DAT_04567705 = 1;
  }
  if (MCLJFDHDMOD == (System_Collections_Generic_List_NHPEALHAHOA__o *)0x0) {
LAB_033fdee4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033fde48 to 034fde67 has its CatchHandler @ 033fe158 */
  if ((MCLJFDHDMOD->fields)._size < 1) {
    iVar2 = -0x80000000;
  }
  else {
    index = 0;
    iVar2 = -0x80000000;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)MCLJFDHDMOD,index,
                          Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_033fdee4;
                    /* try { // try from 033fde78 to 034fde8b has its CatchHandler @ 033fe168 */
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)&pIVar3[3].monitor
                         ,(MethodInfo *)0x0);
      if (iVar2 < iVar1) {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)MCLJFDHDMOD,index,
                            Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_033fdee4;
                    /* try { // try from 033fdea4 to 034fdf3f has its CatchHandler @ 033fe16c */
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                            &pIVar3[3].monitor,(MethodInfo *)0x0);
      }
      index = index + 1;
    } while (index < (MCLJFDHDMOD->fields)._size);
  }
  return iVar2;
}

