// PJKHAJKEHEL$$BDGGJMCLFCF @ RVA 0x3045674

void PJKHAJKEHEL__BDGGJMCLFCF
               (PJKHAJKEHEL_o *__this,
               System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *IDLJDJINILP,
               MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  FPLCEOJCPOD_o *pFVar4;
  int index;
  Il2CppClass *PMACBPAMPJA;
  float fVar5;
  int32_t local_54;
  
  if ((DAT_04565dcb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__);
    DAT_04565dcb = 1;
  }
  local_54 = 0;
  if (IDLJDJINILP != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
    iVar1 = (IDLJDJINILP->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)IDLJDJINILP,index,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__
                           );
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03145790;
        PMACBPAMPJA = pIVar3[1].klass;
        fVar5 = *(float *)&pIVar3[1].monitor;
        local_54 = 0;
        pFVar4 = (__this->fields).ACHJNNOKEDK;
        if (pFVar4 == (FPLCEOJCPOD_o *)0x0) goto LAB_03145790;
        bVar2 = FPLCEOJCPOD__KNMENIBLFGF
                          (pFVar4,(System_String_o *)PMACBPAMPJA,&local_54,true,false,
                           (MethodInfo *)0x0);
        if (bVar2) {
          pFVar4 = (__this->fields).ACHJNNOKEDK;
          if (pFVar4 == (FPLCEOJCPOD_o *)0x0) goto LAB_03145790;
          fVar5 = fVar5 + (float)local_54;
          CJNHFNHJHPE = -0x80000000;
          if (fVar5 != INFINITY) {
            CJNHFNHJHPE = (int)fVar5;
          }
          FPLCEOJCPOD__FOOHBJNHOKK
                    (pFVar4,(System_String_o *)PMACBPAMPJA,CJNHFNHJHPE,false,(MethodInfo *)0x0);
        }
        index = index + 1;
      } while (iVar1 != index);
    }
    return;
  }
LAB_03145790:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

