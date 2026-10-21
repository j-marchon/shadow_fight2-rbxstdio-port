// HFLNADKHFLG$$DNKBNOPCLII @ RVA 0x33C2BD4

void HFLNADKHFLG__DNKBNOPCLII
               (System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *PHOLAJOMLEL,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  int iVar4;
  int index;
  int32_t index_00;
  Il2CppClass *a;
  void *pvVar5;
  
  if ((DAT_04567de3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__);
    DAT_04567de3 = 1;
  }
  if (PHOLAJOMLEL == (System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *)0x0) {
LAB_034c2d10:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar4 = (PHOLAJOMLEL->fields)._size;
  if (0 < iVar4) {
    index = 0;
    do {
      iVar1 = index + 1;
      index_00 = iVar1;
      if (iVar1 < iVar4) {
        do {
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__
                             );
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_034c2d10;
          a = pIVar3[1].klass;
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index_00,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__
                             );
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_034c2d10;
                    /* try { // try from 034c2c84 to 035c2cab has its CatchHandler @ 034c30dc */
          bVar2 = System_String__op_Equality
                            ((System_String_o *)a,(System_String_o *)pIVar3[1].klass,
                             (MethodInfo *)0x0);
          if (bVar2) {
            pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__
                               );
            if (pIVar3 == (Il2CppObject *)0x0) goto LAB_034c2d10;
            pvVar5 = pIVar3[1].monitor;
            pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index_00,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__
                               );
            if (pIVar3 == (Il2CppObject *)0x0) goto LAB_034c2d10;
            if (pvVar5 == pIVar3[1].monitor) {
              System_Collections_Generic_List<object>__RemoveAt
                        ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index_00,
                         Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_RemoveAt__
                        );
              index_00 = index_00 + -1;
            }
          }
                    /* try { // try from 034c2ce0 to 035c2d1b has its CatchHandler @ 034c30e0 */
          iVar4 = (PHOLAJOMLEL->fields)._size;
          index_00 = index_00 + 1;
        } while (index_00 < iVar4);
      }
      index = iVar1;
    } while (iVar1 < iVar4);
  }
  return;
}

