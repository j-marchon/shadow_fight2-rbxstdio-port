// HHLPEJCDCBH$$GIENGNEGHPJ @ RVA 0x32FDC00

void HHLPEJCDCBH__GIENGNEGHPJ(HHLPEJCDCBH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  System_Int32_array *pSVar1;
  UnityEngine_Vector3_array *pUVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar3;
  UnityEngine_Vector3_array **ppUVar4;
  System_Collections_Generic_List_int__o **ppSVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_04567703 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_ToArray__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04567703 = 1;
    method = extraout_x1;
  }
  ppSVar5 = &(__this->fields).ECCEGMJMOBJ;
  __this_00 = *ppSVar5;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = method;
  auVar6 = auVar6 << 0x40;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
    pSVar1 = System_Collections_Generic_List<int>__ToArray
                       (__this_00,Method_System_Collections_Generic_List<int>_ToArray__);
    (__this->fields).KIDEMGIBKHC = pSVar1;
    auVar6 = thunk_FUN_01c20e04(&__this->fields,pSVar1);
    pSVar3 = (__this->fields).ECFOALIBLLO;
    if (pSVar3 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      pUVar2 = (UnityEngine_Vector3_array *)
               FUN_01bab718(UnityEngine_Vector3___TypeInfo,(pSVar3->fields)._size);
      ppUVar4 = &(__this->fields).GNIBJEOJOBO;
      *ppUVar4 = pUVar2;
      thunk_FUN_01c20e04(ppUVar4,pUVar2);
      (__this->fields).ECCEGMJMOBJ = (System_Collections_Generic_List_int__o *)0x0;
      thunk_FUN_01c20e04(ppSVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}

