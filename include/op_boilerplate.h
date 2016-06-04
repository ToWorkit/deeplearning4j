#pragma once

#define EXTRACT(...) EXTRACT __VA_ARGS__ 
#define NOTHING_EXTRACT 
#define PASTE(x, ...) x ## __VA_ARGS__ 
#define EVALUATING_PASTE(x, ...) PASTE(x, __VA_ARGS__) 
#define UNPAREN(x) EVALUATING_PASTE(NOTHING_, EXTRACT x) 

#define _EXPAND_OP_CALL(FN, SIG, NUM, TYPE) else if(opNum == NUM){ FN<TYPE<T>>SIG; }
#define _EXPAND_RETURNING_OP_CALL(FN, SIG, NUM, TYPE) else if(opNum == NUM){ return FN<TYPE<T>>SIG; }
#define _EXPAND_PACKED_OP_CALL(FN, SIG, OPNUM_PAIR) EVALUATING_PASTE(_EXPAND, _OP_CALL (FN, SIG, UNPAREN(OPNUM_PAIR)))
#define _EXPAND_RETURNING_PACKED_OP_CALL(FN, SIG, OPNUM_PAIR) EVALUATING_PASTE(_EXPAND, _RETURNING_OP_CALL (FN, SIG, UNPAREN(OPNUM_PAIR)))
#define FE_1(WHAT, FN, SIG, OPNUM_PAIR) WHAT(FN, SIG, OPNUM_PAIR)
#define FE_2(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_1(WHAT, FN, SIG, __VA_ARGS__)
#define FE_3(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_2(WHAT, FN, SIG, __VA_ARGS__)
#define FE_4(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_3(WHAT, FN, SIG, __VA_ARGS__)
#define FE_5(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_4(WHAT, FN, SIG, __VA_ARGS__)
#define FE_6(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_5(WHAT, FN, SIG, __VA_ARGS__)
#define FE_7(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_6(WHAT, FN, SIG, __VA_ARGS__)
#define FE_8(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_7(WHAT, FN, SIG, __VA_ARGS__)
#define FE_9(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_8(WHAT, FN, SIG, __VA_ARGS__)
#define FE_10(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_9(WHAT, FN, SIG, __VA_ARGS__)
#define FE_11(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_10(WHAT, FN, SIG, __VA_ARGS__)
#define FE_12(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_11(WHAT, FN, SIG, __VA_ARGS__)
#define FE_13(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_12(WHAT, FN, SIG, __VA_ARGS__)
#define FE_14(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_13(WHAT, FN, SIG, __VA_ARGS__)
#define FE_15(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_14(WHAT, FN, SIG, __VA_ARGS__)
#define FE_16(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_15(WHAT, FN, SIG, __VA_ARGS__)
#define FE_17(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_16(WHAT, FN, SIG, __VA_ARGS__)
#define FE_18(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_17(WHAT, FN, SIG, __VA_ARGS__)
#define FE_19(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_18(WHAT, FN, SIG, __VA_ARGS__)
#define FE_20(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_19(WHAT, FN, SIG, __VA_ARGS__)
#define FE_21(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_20(WHAT, FN, SIG, __VA_ARGS__)
#define FE_22(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_21(WHAT, FN, SIG, __VA_ARGS__)
#define FE_23(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_22(WHAT, FN, SIG, __VA_ARGS__)
#define FE_24(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_23(WHAT, FN, SIG, __VA_ARGS__)
#define FE_25(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_24(WHAT, FN, SIG, __VA_ARGS__)
#define FE_26(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_25(WHAT, FN, SIG, __VA_ARGS__)
#define FE_27(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_26(WHAT, FN, SIG, __VA_ARGS__)
#define FE_28(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_27(WHAT, FN, SIG, __VA_ARGS__)
#define FE_29(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_28(WHAT, FN, SIG, __VA_ARGS__)
#define FE_30(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_29(WHAT, FN, SIG, __VA_ARGS__)
#define FE_31(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_30(WHAT, FN, SIG, __VA_ARGS__)
#define FE_32(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_31(WHAT, FN, SIG, __VA_ARGS__)
#define FE_33(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_32(WHAT, FN, SIG, __VA_ARGS__)
#define FE_34(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_33(WHAT, FN, SIG, __VA_ARGS__)
#define FE_35(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_34(WHAT, FN, SIG, __VA_ARGS__)
#define FE_36(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_35(WHAT, FN, SIG, __VA_ARGS__)
#define FE_37(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_36(WHAT, FN, SIG, __VA_ARGS__)
#define FE_38(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_37(WHAT, FN, SIG, __VA_ARGS__)
#define FE_39(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_38(WHAT, FN, SIG, __VA_ARGS__)
#define FE_40(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_39(WHAT, FN, SIG, __VA_ARGS__)
#define FE_41(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_40(WHAT, FN, SIG, __VA_ARGS__)
#define FE_42(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_41(WHAT, FN, SIG, __VA_ARGS__)
#define FE_43(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_42(WHAT, FN, SIG, __VA_ARGS__)
#define FE_44(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_43(WHAT, FN, SIG, __VA_ARGS__)
#define FE_45(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_44(WHAT, FN, SIG, __VA_ARGS__)
#define FE_46(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_45(WHAT, FN, SIG, __VA_ARGS__)
#define FE_47(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_46(WHAT, FN, SIG, __VA_ARGS__)
#define FE_48(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_47(WHAT, FN, SIG, __VA_ARGS__)
#define FE_49(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_48(WHAT, FN, SIG, __VA_ARGS__)
#define FE_50(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_49(WHAT, FN, SIG, __VA_ARGS__)
#define FE_51(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_50(WHAT, FN, SIG, __VA_ARGS__)
#define FE_52(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_51(WHAT, FN, SIG, __VA_ARGS__)
#define FE_53(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_52(WHAT, FN, SIG, __VA_ARGS__)
#define FE_54(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_53(WHAT, FN, SIG, __VA_ARGS__)
#define FE_55(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_54(WHAT, FN, SIG, __VA_ARGS__)
#define FE_56(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_55(WHAT, FN, SIG, __VA_ARGS__)
#define FE_57(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_56(WHAT, FN, SIG, __VA_ARGS__)
#define FE_58(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_57(WHAT, FN, SIG, __VA_ARGS__)
#define FE_59(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_58(WHAT, FN, SIG, __VA_ARGS__)
#define FE_60(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_59(WHAT, FN, SIG, __VA_ARGS__)
#define FE_61(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_60(WHAT, FN, SIG, __VA_ARGS__)
#define FE_62(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_61(WHAT, FN, SIG, __VA_ARGS__)
#define FE_63(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_62(WHAT, FN, SIG, __VA_ARGS__)
#define FE_64(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_63(WHAT, FN, SIG, __VA_ARGS__)
#define FE_65(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_64(WHAT, FN, SIG, __VA_ARGS__)
#define FE_66(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_65(WHAT, FN, SIG, __VA_ARGS__)
#define FE_67(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_66(WHAT, FN, SIG, __VA_ARGS__)
#define FE_68(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_67(WHAT, FN, SIG, __VA_ARGS__)
#define FE_69(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_68(WHAT, FN, SIG, __VA_ARGS__)
#define FE_70(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_69(WHAT, FN, SIG, __VA_ARGS__)
#define FE_71(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_70(WHAT, FN, SIG, __VA_ARGS__)
#define FE_72(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_71(WHAT, FN, SIG, __VA_ARGS__)
#define FE_73(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_72(WHAT, FN, SIG, __VA_ARGS__)
#define FE_74(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_73(WHAT, FN, SIG, __VA_ARGS__)
#define FE_75(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_74(WHAT, FN, SIG, __VA_ARGS__)
#define FE_76(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_75(WHAT, FN, SIG, __VA_ARGS__)
#define FE_77(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_76(WHAT, FN, SIG, __VA_ARGS__)
#define FE_78(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_77(WHAT, FN, SIG, __VA_ARGS__)
#define FE_79(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_78(WHAT, FN, SIG, __VA_ARGS__)
#define FE_80(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_79(WHAT, FN, SIG, __VA_ARGS__)
#define FE_81(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_80(WHAT, FN, SIG, __VA_ARGS__)
#define FE_82(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_81(WHAT, FN, SIG, __VA_ARGS__)
#define FE_83(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_82(WHAT, FN, SIG, __VA_ARGS__)
#define FE_84(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_83(WHAT, FN, SIG, __VA_ARGS__)
#define FE_85(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_84(WHAT, FN, SIG, __VA_ARGS__)
#define FE_86(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_85(WHAT, FN, SIG, __VA_ARGS__)
#define FE_87(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_86(WHAT, FN, SIG, __VA_ARGS__)
#define FE_88(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_87(WHAT, FN, SIG, __VA_ARGS__)
#define FE_89(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_88(WHAT, FN, SIG, __VA_ARGS__)
#define FE_90(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_89(WHAT, FN, SIG, __VA_ARGS__)
#define FE_91(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_90(WHAT, FN, SIG, __VA_ARGS__)
#define FE_92(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_91(WHAT, FN, SIG, __VA_ARGS__)
#define FE_93(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_92(WHAT, FN, SIG, __VA_ARGS__)
#define FE_94(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_93(WHAT, FN, SIG, __VA_ARGS__)
#define FE_95(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_94(WHAT, FN, SIG, __VA_ARGS__)
#define FE_96(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_95(WHAT, FN, SIG, __VA_ARGS__)
#define FE_97(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_96(WHAT, FN, SIG, __VA_ARGS__)
#define FE_98(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_97(WHAT, FN, SIG, __VA_ARGS__)
#define FE_99(WHAT, FN, SIG, OPNUM_PAIR, ...) WHAT(FN, SIG, OPNUM_PAIR)FE_98(WHAT, FN, SIG, __VA_ARGS__)

#define GET_MACRO(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95, _96, _97, _98, _99, NAME,...) NAME
#define FOR_EACH(WHAT, NAME, SIGNATURE, ...) GET_MACRO(__VA_ARGS__,  FE_99, FE_98, FE_97, FE_96, FE_95, FE_94, FE_93, FE_92, FE_91, FE_90, FE_89, FE_88, FE_87, FE_86, FE_85, FE_84, FE_83, FE_82, FE_81, FE_80, FE_79, FE_78, FE_77, FE_76, FE_75, FE_74, FE_73, FE_72, FE_71, FE_70, FE_69, FE_68, FE_67, FE_66, FE_65, FE_64, FE_63, FE_62, FE_61, FE_60, FE_59, FE_58, FE_57, FE_56, FE_55, FE_54, FE_53, FE_52, FE_51, FE_50, FE_49, FE_48, FE_47, FE_46, FE_45, FE_44, FE_43, FE_42, FE_41, FE_40, FE_39, FE_38, FE_37, FE_36, FE_35, FE_34, FE_33, FE_32, FE_31, FE_30, FE_29, FE_28, FE_27, FE_26, FE_25, FE_24, FE_23, FE_22, FE_21, FE_20, FE_19, FE_18, FE_17, FE_16, FE_15, FE_14, FE_13, FE_12, FE_11, FE_10, FE_9, FE_8, FE_7, FE_6, FE_5, FE_4, FE_3, FE_2, FE_1)(WHAT, NAME, SIGNATURE, __VA_ARGS__)


#define _EXEC_OPS(WHAT, NAME, SIGNATURE, ...) FOR_EACH(WHAT, NAME, SIGNATURE ,__VA_ARGS__)
#define DISPATCH_BY_OPNUM(NAME, SIGNATURE, ...) if(false){} _EXEC_OPS(_EXPAND_PACKED_OP_CALL, NAME, (SIGNATURE), __VA_ARGS__) else{ printf("[ERROR] Unknown opNum=%d on %s:%d", opNum, __FILE__, __LINE__); }
#define RETURNING_DISPATCH_BY_OPNUM(NAME, SIGNATURE, ...) if(false){} _EXEC_OPS(_EXPAND_RETURNING_PACKED_OP_CALL, NAME, (SIGNATURE), __VA_ARGS__) else{ printf("[ERROR] Unknown opNum=%d on %s:%d", opNum, __FILE__, __LINE__); return 0; }
#define PARAMS(...) __VA_ARGS__

