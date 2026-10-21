// FCJBEKHDLAF$$EJKHFOGNAPK @ RVA 0x33EB440

System_String_o *
FCJBEKHDLAF__EJKHFOGNAPK(FCJBEKHDLAF_o *__this,MDAPDLLMOMF_o *NAAEJFNGPCP,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *__this_00;
  Il2CppClass *pIVar3;
  int index;
  float fVar4;
  float fVar5;
  void *local_80;
  Il2CppClass *pIStack_78;
  undefined4 local_70;
  void *local_60;
  Il2CppClass *pIStack_58;
  undefined4 local_50;
  
  if ((DAT_04567f33 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Count__
                );
                    /* try { // try from 034eb474 to 035eb48f has its CatchHandler @ 034eb5e4 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Item__
                );
    __this = (FCJBEKHDLAF_o *)FUN_01bab630(&StringLiteral_1);
    DAT_04567f33 = 1;
  }
  if ((NAAEJFNGPCP != (MDAPDLLMOMF_o *)0x0) &&
     (__this_00 = (NAAEJFNGPCP->fields).AKKFNCFAPDO,
     __this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *)0x0)) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 == 0) {
      return StringLiteral_1;
    }
                    /* try { // try from 034eb4a8 to 035eb4b7 has its CatchHandler @ 034eb5fc */
                    /* try { // try from 034eb4b8 to 035eb4c3 has its CatchHandler @ 034eb5e0 */
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Item__
                       );
    __this = (FCJBEKHDLAF_o *)0x0;
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar2[1].klass;
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Item__
                         );
                    /* try { // try from 034eb4d4 to 035eb4db has its CatchHandler @ 034eb5d8 */
      __this = (FCJBEKHDLAF_o *)0x0;
      if (pIVar2 != (Il2CppObject *)0x0) {
        local_50 = *(undefined4 *)&pIVar2[2].monitor;
        pIStack_58 = pIVar2[2].klass;
        local_60 = pIVar2[1].monitor;
        fVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                           (MethodInfo *)0x0);
        if (iVar1 < 2) {
          return (System_String_o *)pIVar3;
        }
        index = 1;
        while( true ) {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Item__
                             );
                    /* try { // try from 034eb514 to 035eb53b has its CatchHandler @ 034eb5f0 */
          __this = (FCJBEKHDLAF_o *)0x0;
          if (pIVar2 == (Il2CppObject *)0x0) break;
          local_70 = *(undefined4 *)&pIVar2[2].monitor;
          pIStack_78 = pIVar2[2].klass;
          local_80 = pIVar2[1].monitor;
          fVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                             (MethodInfo *)0x0);
          if (fVar4 < fVar5) {
                    /* try { // try from 034eb53c to 035eb5c3 has its CatchHandler @ 034eb3f4 */
            pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,index,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Item__
                               );
            __this = (FCJBEKHDLAF_o *)0x0;
            if (pIVar2 == (Il2CppObject *)0x0) break;
            pIVar3 = pIVar2[1].klass;
            fVar4 = fVar5;
          }
          index = index + 1;
          if (iVar1 == index) {
            return (System_String_o *)pIVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

