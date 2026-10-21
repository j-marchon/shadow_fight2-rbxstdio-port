// MGNPHCAAEIO.MACDOBFPDPP$$HNCMGLINNDO @ RVA 0x3410274

HGLELMDNMMA_o *
MGNPHCAAEIO_MACDOBFPDPP__HNCMGLINNDO
          (MGNPHCAAEIO_MACDOBFPDPP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  HGLELMDNMMA_o *pHVar1;
  System_Collections_Generic_List_HGLELMDNMMA__o *source;
  
  if ((DAT_0456807d & 1) == 0) {
    FUN_01bab630(&Method_MGNPHCAAEIO_MACDOBFPDPP_BMJGHCCKKOE_DLAACJMLAJB__);
    FUN_01bab630(&MGNPHCAAEIO_MACDOBFPDPP_BMJGHCCKKOE_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<HGLELMDNMMA>__);
    FUN_01bab630(&System_Func<HGLELMDNMMA,_bool>_TypeInfo);
    DAT_0456807d = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(MGNPHCAAEIO_MACDOBFPDPP_BMJGHCCKKOE_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    source = (__this->fields).GFBNJPMOEKD;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<HGLELMDNMMA,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pHVar1 = (HGLELMDNMMA_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        Method_System_Linq_Enumerable_FirstOrDefault<HGLELMDNMMA>__);
    return pHVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

