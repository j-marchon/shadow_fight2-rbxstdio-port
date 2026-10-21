// IGFGDDANEPE$$FGDEJFIKMCP @ RVA 0x30A3ECC

bool IGFGDDANEPE__FGDEJFIKMCP(IGFGDDANEPE_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_0456615f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
    DAT_0456615f = 1;
  }
  __this_00 = (__this->fields).PAPANCDPPIF;
  if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_031a3f64:
        return index < iVar1;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
      if ((pIVar3 == (Il2CppObject *)0x0) || (EIKFGOCCOIE == (HEFOANCOHDC_o *)0x0)) break;
      bVar2 = System_String__op_Equality
                        ((System_String_o *)pIVar3[4].klass,(EIKFGOCCOIE->fields).JIJLBFGKNJK,
                         (MethodInfo *)0x0);
      if (bVar2) goto LAB_031a3f64;
      __this_00 = (__this->fields).PAPANCDPPIF;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

