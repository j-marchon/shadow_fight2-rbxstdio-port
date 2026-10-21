// TypeDefIndex 123
// Namespace: 
// public class InfoAnimation.DNGAEDAAIJE
// Fields:
//   public List<InfoAnimation> PCGACGNHJHF; // 0x10

// ===== public bool HELJFLMEKII(InfoAnimation NLEBDPHNIDI)  [RVA 0x301A9A0]
// InfoAnimation.DNGAEDAAIJE$$HELJFLMEKII @ RVA 0x301A9A0

bool InfoAnimation_DNGAEDAAIJE__HELJFLMEKII
               (InfoAnimation_DNGAEDAAIJE_o *__this,InfoAnimation_o *NLEBDPHNIDI,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  InfoAnimation_o *pEVar2;
  int index;
  
  if ((DAT_04565bff & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_get_Item__);
    DAT_04565bff = 1;
  }
  __this_00 = (__this->fields).PCGACGNHJHF;
  if (__this_00 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if ((iVar1 <= index) ||
         (pEVar2 = (InfoAnimation_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<InfoAnimation>_get_Item__),
         pEVar2 == NLEBDPHNIDI)) {
        return iVar1 <= index;
      }
      __this_00 = (__this->fields).PCGACGNHJHF;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x301792C]
// InfoAnimation.DNGAEDAAIJE$$.ctor @ RVA 0x301792C

void InfoAnimation_DNGAEDAAIJE___ctor(InfoAnimation_DNGAEDAAIJE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c00 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InfoAnimation>_TypeInfo);
    DAT_04565c00 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InfoAnimation>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
  (__this->fields).PCGACGNHJHF = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

