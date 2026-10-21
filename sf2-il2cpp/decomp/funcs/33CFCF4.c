// NHOILKKCIMI$$CIHMPKNAGDI @ RVA 0x33CFCF4

System_String_o *
NHOILKKCIMI__CIHMPKNAGDI
          (NHOILKKCIMI_o *__this,System_String_o *NONPLOOOOAG,System_String_o *GNLGLGHFLDD,
          int32_t EMHMMKODGBL,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_Char_array *separator;
  System_String_array *pSVar4;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar5;
  System_Object_array *source;
  int iVar6;
  uint uVar7;
  uint count;
  
  if ((DAT_04567e56 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Take<string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<string>__);
    DAT_04567e56 = 1;
  }
  pSVar3 = System_Environment__get_NewLine((MethodInfo *)0x0);
  if ((pSVar3 != (System_String_o *)0x0) &&
     (separator = System_String__ToCharArray(pSVar3,(MethodInfo *)0x0),
     GNLGLGHFLDD != (System_String_o *)0x0)) {
    pSVar4 = System_String__Split(GNLGLGHFLDD,separator,(MethodInfo *)0x0);
    pSVar5 = System_Linq_Enumerable__Take<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,EMHMMKODGBL,
                        Method_System_Linq_Enumerable_Take<string>__);
    source = System_Linq_Enumerable__ToArray<object>
                       (pSVar5,Method_System_Linq_Enumerable_ToArray<string>__);
    if ((NONPLOOOOAG != (System_String_o *)0x0) && (source != (System_Object_array *)0x0)) {
      uVar2 = (uint)source->max_length;
                    /* try { // try from 034cfd9c to 035cfe5b has its CatchHandler @ 034cfd9c
                       catch() { ... } // from try @ 034cfd9c with catch @ 034cfd9c
                       catch() { ... } // from try @ 034cfeb4 with catch @ 034cfd9c
                       catch() { ... } // from try @ 034cfedc with catch @ 034cfd9c
                       catch() { ... } // from try @ 034cff10 with catch @ 034cfd9c
                       catch() { ... } // from try @ 034cff7c with catch @ 034cfd9c */
      uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      count = uVar1;
      if (0 < (int)uVar2) {
        iVar6 = (NONPLOOOOAG->fields)._stringLength;
        uVar7 = 0;
        do {
          if (uVar2 == uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (source->m_Items[(int)uVar7] == (Il2CppObject *)0x0) goto LAB_034cfe30;
          iVar6 = *(int *)&source->m_Items[(int)uVar7][1].klass + iVar6;
          count = uVar7;
        } while ((iVar6 <= (__this->fields).OHMHCOBHPCG) &&
                (uVar7 = uVar7 + 1, count = uVar1, uVar1 != uVar7));
      }
      pSVar3 = System_Environment__get_NewLine((MethodInfo *)0x0);
      pSVar5 = System_Linq_Enumerable__Take<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,count,
                          Method_System_Linq_Enumerable_Take<string>__);
      pSVar4 = (System_String_array *)
               System_Linq_Enumerable__ToArray<object>
                         (pSVar5,Method_System_Linq_Enumerable_ToArray<string>__);
      pSVar3 = System_String__Join(pSVar3,pSVar4,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
LAB_034cfe30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

