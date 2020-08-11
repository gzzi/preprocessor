# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2011) */
#
# /* See http://www.boost.org for most recent version. */
#
# include <boost/preprocessor/arithmetic/add.hpp>
# include <boost/preprocessor/arithmetic/dec.hpp>
# include <boost/preprocessor/arithmetic/div.hpp>
# include <boost/preprocessor/arithmetic/inc.hpp>
# include <boost/preprocessor/arithmetic/mod.hpp>
# include <boost/preprocessor/arithmetic/sub.hpp>
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/comparison/equal.hpp>
# include <boost/preprocessor/comparison/less.hpp>
# include <boost/preprocessor/control/iif.hpp>
# include <boost/preprocessor/control/expr_iif.hpp>
# include <boost/preprocessor/facilities/is_empty.hpp>
# include <boost/preprocessor/logical/bitor.hpp>
# include <boost/preprocessor/logical/not.hpp>
# include <boost/preprocessor/seq.hpp>
# include <boost/preprocessor/array/elem.hpp>
# include <boost/preprocessor/array/size.hpp>
# include <boost/preprocessor/tuple/elem.hpp>
# include <boost/preprocessor/tuple/size.hpp>
# include <boost/preprocessor/list/at.hpp>
# include <boost/preprocessor/list/size.hpp>
# include <boost/preprocessor/variadic/elem.hpp>
# include <boost/preprocessor/variadic/size.hpp>
# include <libs/preprocessor/test/test.h>

# define SEQ_NONE ()
# define SEQ (4)(1)(5)(2)

# define SEQ_100 \
    (1)(2)(3)(4)(5)(6)(7)(8)(9) \
    (10)(11)(12)(13)(14)(15)(16)(17)(18)(19) \
    (20)(21)(22)(23)(24)(25)(26)(27)(28)(29) \
    (30)(31)(32)(33)(34)(35)(36)(37)(38)(39) \
    (40)(41)(42)(43)(44)(45)(46)(47)(48)(49) \
    (50)(51)(52)(53)(54)(55)(56)(57)(58)(59) \
    (60)(61)(62)(63)(64)(65)(66)(67)(68)(69) \
    (70)(71)(72)(73)(74)(75)(76)(77)(78)(79) \
    (80)(81)(82)(83)(84)(85)(86)(87)(88)(89) \
    (90)(91)(92)(93)(94)(95)(96)(97)(98)(99) \
    (100)
    
# define SEQ_255 \
    (1)(2)(3)(4)(5)(6)(7)(8)(9) \
    (10)(11)(12)(13)(14)(15)(16)(17)(18)(19) \
    (20)(21)(22)(23)(24)(25)(26)(27)(28)(29) \
    (30)(31)(32)(33)(34)(35)(36)(37)(38)(39) \
    (40)(41)(42)(43)(44)(45)(46)(47)(48)(49) \
    (50)(51)(52)(53)(54)(55)(56)(57)(58)(59) \
    (60)(61)(62)(63)(64)(65)(66)(67)(68)(69) \
    (70)(71)(72)(73)(74)(75)(76)(77)(78)(79) \
    (80)(81)(82)(83)(84)(85)(86)(87)(88)(89) \
    (90)(91)(92)(93)(94)(95)(96)(97)(98)(99) \
    (100)(101)(102)(103)(104)(105)(106)(107)(108)(109) \
    (110)(111)(112)(113)(114)(115)(116)(117)(118)(119) \
    (120)(121)(122)(123)(124)(125)(126)(127)(128)(129) \
    (130)(131)(132)(133)(134)(135)(136)(137)(138)(139) \
    (140)(141)(142)(143)(144)(145)(146)(147)(148)(149) \
    (150)(151)(152)(153)(154)(155)(156)(157)(158)(159) \
    (160)(161)(162)(163)(164)(165)(166)(167)(168)(169) \
    (170)(171)(172)(173)(174)(175)(176)(177)(178)(179) \
    (180)(181)(182)(183)(184)(185)(186)(187)(188)(189) \
    (190)(191)(192)(193)(194)(195)(196)(197)(198)(199) \
    (200)(201)(202)(203)(204)(205)(206)(207)(208)(209) \
    (210)(211)(212)(213)(214)(215)(216)(217)(218)(219) \
    (220)(221)(222)(223)(224)(225)(226)(227)(228)(229) \
    (230)(231)(232)(233)(234)(235)(236)(237)(238)(239) \
    (240)(241)(242)(243)(244)(245)(246)(247)(248)(249) \
    (250)(251)(252)(253)(254)(255)
    
# define SEQ_256 SEQ_255(256)

# if BOOST_PP_LIMIT_SEQ == 512

# define SEQ_511 \
    (1)(2)(3)(4)(5)(6)(7)(8)(9) \
    (10)(11)(12)(13)(14)(15)(16)(17)(18)(19) \
    (20)(21)(22)(23)(24)(25)(26)(27)(28)(29) \
    (30)(31)(32)(33)(34)(35)(36)(37)(38)(39) \
    (40)(41)(42)(43)(44)(45)(46)(47)(48)(49) \
    (50)(51)(52)(53)(54)(55)(56)(57)(58)(59) \
    (60)(61)(62)(63)(64)(65)(66)(67)(68)(69) \
    (70)(71)(72)(73)(74)(75)(76)(77)(78)(79) \
    (80)(81)(82)(83)(84)(85)(86)(87)(88)(89) \
    (90)(91)(92)(93)(94)(95)(96)(97)(98)(99) \
    (100)(101)(102)(103)(104)(105)(106)(107)(108)(109) \
    (110)(111)(112)(113)(114)(115)(116)(117)(118)(119) \
    (120)(121)(122)(123)(124)(125)(126)(127)(128)(129) \
    (130)(131)(132)(133)(134)(135)(136)(137)(138)(139) \
    (140)(141)(142)(143)(144)(145)(146)(147)(148)(149) \
    (150)(151)(152)(153)(154)(155)(156)(157)(158)(159) \
    (160)(161)(162)(163)(164)(165)(166)(167)(168)(169) \
    (170)(171)(172)(173)(174)(175)(176)(177)(178)(179) \
    (180)(181)(182)(183)(184)(185)(186)(187)(188)(189) \
    (190)(191)(192)(193)(194)(195)(196)(197)(198)(199) \
    (200)(201)(202)(203)(204)(205)(206)(207)(208)(209) \
    (210)(211)(212)(213)(214)(215)(216)(217)(218)(219) \
    (220)(221)(222)(223)(224)(225)(226)(227)(228)(229) \
    (230)(231)(232)(233)(234)(235)(236)(237)(238)(239) \
    (240)(241)(242)(243)(244)(245)(246)(247)(248)(249) \
    (250)(251)(252)(253)(254)(255)(256)(257)(258)(259) \
    (260)(261)(262)(263)(264)(265)(266)(267)(268)(269) \
    (270)(271)(272)(273)(274)(275)(276)(277)(278)(279) \
    (280)(281)(282)(283)(284)(285)(286)(287)(288)(289) \
    (290)(291)(292)(293)(294)(295)(296)(297)(298)(299) \
    (300)(301)(302)(303)(304)(305)(306)(307)(308)(309) \
    (310)(311)(312)(313)(314)(315)(316)(317)(318)(319) \
    (320)(321)(322)(323)(324)(325)(326)(327)(328)(329) \
    (330)(331)(332)(333)(334)(335)(336)(337)(338)(339) \
    (340)(341)(342)(343)(344)(345)(346)(347)(348)(349) \
    (350)(351)(352)(353)(354)(355)(356)(357)(358)(359) \
    (360)(361)(362)(363)(364)(365)(366)(367)(368)(369) \
    (370)(371)(372)(373)(374)(375)(376)(377)(378)(379) \
    (380)(381)(382)(383)(384)(385)(386)(387)(388)(389) \
    (390)(391)(392)(393)(394)(395)(396)(397)(398)(399) \
    (400)(401)(402)(403)(404)(405)(406)(407)(408)(409) \
    (410)(411)(412)(413)(414)(415)(416)(417)(418)(419) \
    (420)(421)(422)(423)(424)(425)(426)(427)(428)(429) \
    (430)(431)(432)(433)(434)(435)(436)(437)(438)(439) \
    (440)(441)(442)(443)(444)(445)(446)(447)(448)(449) \
    (450)(451)(452)(453)(454)(455)(456)(457)(458)(459) \
    (460)(461)(462)(463)(464)(465)(466)(467)(468)(469) \
    (470)(471)(472)(473)(474)(475)(476)(477)(478)(479) \
    (480)(481)(482)(483)(484)(485)(486)(487)(488)(489) \
    (490)(491)(492)(493)(494)(495)(496)(497)(498)(499) \
    (500)(501)(502)(503)(504)(505)(506)(507)(508)(509) \
    (510)(511)
    
# define SEQ_512 SEQ_511(512)

# endif

# if BOOST_PP_LIMIT_SEQ == 1024

# define SEQ_1023 \
    (1)(2)(3)(4)(5)(6)(7)(8)(9) \
    (10)(11)(12)(13)(14)(15)(16)(17)(18)(19) \
    (20)(21)(22)(23)(24)(25)(26)(27)(28)(29) \
    (30)(31)(32)(33)(34)(35)(36)(37)(38)(39) \
    (40)(41)(42)(43)(44)(45)(46)(47)(48)(49) \
    (50)(51)(52)(53)(54)(55)(56)(57)(58)(59) \
    (60)(61)(62)(63)(64)(65)(66)(67)(68)(69) \
    (70)(71)(72)(73)(74)(75)(76)(77)(78)(79) \
    (80)(81)(82)(83)(84)(85)(86)(87)(88)(89) \
    (90)(91)(92)(93)(94)(95)(96)(97)(98)(99) \
    (100)(101)(102)(103)(104)(105)(106)(107)(108)(109) \
    (110)(111)(112)(113)(114)(115)(116)(117)(118)(119) \
    (120)(121)(122)(123)(124)(125)(126)(127)(128)(129) \
    (130)(131)(132)(133)(134)(135)(136)(137)(138)(139) \
    (140)(141)(142)(143)(144)(145)(146)(147)(148)(149) \
    (150)(151)(152)(153)(154)(155)(156)(157)(158)(159) \
    (160)(161)(162)(163)(164)(165)(166)(167)(168)(169) \
    (170)(171)(172)(173)(174)(175)(176)(177)(178)(179) \
    (180)(181)(182)(183)(184)(185)(186)(187)(188)(189) \
    (190)(191)(192)(193)(194)(195)(196)(197)(198)(199) \
    (200)(201)(202)(203)(204)(205)(206)(207)(208)(209) \
    (210)(211)(212)(213)(214)(215)(216)(217)(218)(219) \
    (220)(221)(222)(223)(224)(225)(226)(227)(228)(229) \
    (230)(231)(232)(233)(234)(235)(236)(237)(238)(239) \
    (240)(241)(242)(243)(244)(245)(246)(247)(248)(249) \
    (250)(251)(252)(253)(254)(255)(256)(257)(258)(259) \
    (260)(261)(262)(263)(264)(265)(266)(267)(268)(269) \
    (270)(271)(272)(273)(274)(275)(276)(277)(278)(279) \
    (280)(281)(282)(283)(284)(285)(286)(287)(288)(289) \
    (290)(291)(292)(293)(294)(295)(296)(297)(298)(299) \
    (300)(301)(302)(303)(304)(305)(306)(307)(308)(309) \
    (310)(311)(312)(313)(314)(315)(316)(317)(318)(319) \
    (320)(321)(322)(323)(324)(325)(326)(327)(328)(329) \
    (330)(331)(332)(333)(334)(335)(336)(337)(338)(339) \
    (340)(341)(342)(343)(344)(345)(346)(347)(348)(349) \
    (350)(351)(352)(353)(354)(355)(356)(357)(358)(359) \
    (360)(361)(362)(363)(364)(365)(366)(367)(368)(369) \
    (370)(371)(372)(373)(374)(375)(376)(377)(378)(379) \
    (380)(381)(382)(383)(384)(385)(386)(387)(388)(389) \
    (390)(391)(392)(393)(394)(395)(396)(397)(398)(399) \
    (400)(401)(402)(403)(404)(405)(406)(407)(408)(409) \
    (410)(411)(412)(413)(414)(415)(416)(417)(418)(419) \
    (420)(421)(422)(423)(424)(425)(426)(427)(428)(429) \
    (430)(431)(432)(433)(434)(435)(436)(437)(438)(439) \
    (440)(441)(442)(443)(444)(445)(446)(447)(448)(449) \
    (450)(451)(452)(453)(454)(455)(456)(457)(458)(459) \
    (460)(461)(462)(463)(464)(465)(466)(467)(468)(469) \
    (470)(471)(472)(473)(474)(475)(476)(477)(478)(479) \
    (480)(481)(482)(483)(484)(485)(486)(487)(488)(489) \
    (490)(491)(492)(493)(494)(495)(496)(497)(498)(499) \
    (500)(501)(502)(503)(504)(505)(506)(507)(508)(509) \
    (510)(511)(512)                                    \
    (513)(514)(515)(516)(517)(518)(519)(520)(521)      \
    (522)(523)(524)(525)(526)(527)(528)(529)(530)(531) \
    (532)(533)(534)(535)(536)(537)(538)(539)(540)(541) \
    (542)(543)(544)(545)(546)(547)(548)(549)(550)(551) \
    (552)(553)(554)(555)(556)(557)(558)(559)(560)(561) \
    (562)(563)(564)(565)(566)(567)(568)(569)(570)(571) \
    (572)(573)(574)(575)(576)(577)(578)(579)(580)(581) \
    (582)(583)(584)(585)(586)(587)(588)(589)(590)(591) \
    (592)(593)(594)(595)(596)(597)(598)(599)(600)(601) \
    (602)(603)(604)(605)(606)(607)(608)(609)(610)(611) \
    (612)(613)(614)(615)(616)(617)(618)(619)(620)(621) \
    (622)(623)(624)(625)(626)(627)(628)(629)(630)(631) \
    (632)(633)(634)(635)(636)(637)(638)(639)(640)(641) \
    (642)(643)(644)(645)(646)(647)(648)(649)(650)(651) \
    (652)(653)(654)(655)(656)(657)(658)(659)(660)(661) \
    (662)(663)(664)(665)(666)(667)(668)(669)(670)(671) \
    (672)(673)(674)(675)(676)(677)(678)(679)(680)(681) \
    (682)(683)(684)(685)(686)(687)(688)(689)(690)(691) \
    (692)(693)(694)(695)(696)(697)(698)(699)(700)(701) \
    (702)(703)(704)(705)(706)(707)(708)(709)(710)(711) \
    (712)(713)(714)(715)(716)(717)(718)(719)(720)(721) \
    (722)(723)(724)(725)(726)(727)(728)(729)(730)(731) \
    (732)(733)(734)(735)(736)(737)(738)(739)(740)(741) \
    (742)(743)(744)(745)(746)(747)(748)(749)(750)(751) \
    (752)(753)(754)(755)(756)(757)(758)(759)(760)(761) \
    (762)(763)(764)(765)(766)(767)(768)(769)(770)(771) \
    (772)(773)(774)(775)(776)(777)(778)(779)(780)(781) \
    (782)(783)(784)(785)(786)(787)(788)(789)(790)(791) \
    (792)(793)(794)(795)(796)(797)(798)(799)(800)(801) \
    (802)(803)(804)(805)(806)(807)(808)(809)(810)(811) \
    (812)(813)(814)(815)(816)(817)(818)(819)(820)(821) \
    (822)(823)(824)(825)(826)(827)(828)(829)(830)(831) \
    (832)(833)(834)(835)(836)(837)(838)(839)(840)(841) \
    (842)(843)(844)(845)(846)(847)(848)(849)(850)(851) \
    (852)(853)(854)(855)(856)(857)(858)(859)(860)(861) \
    (862)(863)(864)(865)(866)(867)(868)(869)(870)(871) \
    (872)(873)(874)(875)(876)(877)(878)(879)(880)(881) \
    (882)(883)(884)(885)(886)(887)(888)(889)(890)(891) \
    (892)(893)(894)(895)(896)(897)(898)(899)(900)(901) \
    (902)(903)(904)(905)(906)(907)(908)(909)(910)(911) \
    (912)(913)(914)(915)(916)(917)(918)(919)(920)(921) \
    (922)(923)(924)(925)(926)(927)(928)(929)(930)(931) \
    (932)(933)(934)(935)(936)(937)(938)(939)(940)(941) \
    (942)(943)(944)(945)(946)(947)(948)(949)(950)(951) \
    (952)(953)(954)(955)(956)(957)(958)(959)(960)(961) \
    (962)(963)(964)(965)(966)(967)(968)(969)(970)(971) \
    (972)(973)(974)(975)(976)(977)(978)(979)(980)(981) \
    (982)(983)(984)(985)(986)(987)(988)(989)(990)(991) \
    (992)(993)(994)(995)(996)(997)(998)(999)(1000)(1001) \
    (1002)(1003)(1004)(1005)(1006)(1007)(1008)(1009)(1010)(1011) \
    (1012)(1013)(1014)(1015)(1016)(1017)(1018)(1019)(1020)(1021) \
    (1022)(1023)
    
# define SEQ_1024 SEQ_1023(1024)

# endif

# define SEQVAR (4,5,8,3,61)(1,0)(5,22,43)(2)(17,45,33)

# define REVERSAL(s, x, y) BOOST_PP_SUB(y, x)
# define SUB_S(s, x, y) BOOST_PP_SUB(x, y)
# define ADD_S(s, x, y) BOOST_PP_ADD(x, y)
# define CAT_S(s, x, y) BOOST_PP_CAT(x, BOOST_PP_IS_EMPTY(y))

BEGIN BOOST_PP_IS_EMPTY(BOOST_PP_SEQ_HEAD(SEQ_NONE)) == 1 END
BEGIN BOOST_PP_SEQ_HEAD(SEQ) == 4 END
BEGIN BOOST_PP_SEQ_HEAD(SEQ_255) == 1 END
BEGIN BOOST_PP_SEQ_HEAD(SEQ_256) == 1 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_HEAD(SEQ_511) == 1 END
BEGIN BOOST_PP_SEQ_HEAD(SEQ_512) == 1 END

# endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_HEAD(SEQ_1023) == 1 END
BEGIN BOOST_PP_SEQ_HEAD(SEQ_1024) == 1 END

# endif

BEGIN BOOST_PP_SEQ_FOLD_LEFT(CAT_S, 1, SEQ_NONE) == 11 END
BEGIN BOOST_PP_SEQ_FOLD_LEFT(SUB_S, 22, SEQ) == 10 END

BEGIN BOOST_PP_SEQ_FOLD_RIGHT(CAT_S, 2, SEQ_NONE) == 21 END
BEGIN BOOST_PP_SEQ_FOLD_RIGHT(ADD_S, 0, SEQ) == 12 END
BEGIN BOOST_PP_SEQ_FOLD_RIGHT(REVERSAL, 0, SEQ) == 4 END

BEGIN BOOST_PP_IS_EMPTY(BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REVERSE(SEQ_NONE))) == 1 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REVERSE(SEQ)) == 2514 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_HEAD(BOOST_PP_SEQ_REVERSE(SEQ_512)) == 512 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_HEAD(BOOST_PP_SEQ_REVERSE(SEQ_1024)) == 1024 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REST_N(2, SEQ)) == 52 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REST_N(99, SEQ_100)) == 100 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REST_N(255, SEQ_256)) == 256 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_HEAD(BOOST_PP_SEQ_REST_N(509, SEQ_511)) == 510 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_HEAD(BOOST_PP_SEQ_REST_N(1020, SEQ_1023)) == 1021 END

#endif

BEGIN BOOST_PP_IS_EMPTY(BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_FIRST_N(1, SEQ_NONE))) == 1 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_FIRST_N(2, SEQ)) == 41 END
BEGIN BOOST_PP_SEQ_ELEM(50,BOOST_PP_SEQ_FIRST_N(100, SEQ_100)) == 51 END
BEGIN BOOST_PP_SEQ_ELEM(100,BOOST_PP_SEQ_FIRST_N(255, SEQ_255)) == 101 END
BEGIN BOOST_PP_SEQ_ELEM(200,BOOST_PP_SEQ_FIRST_N(256, SEQ_256)) == 201 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_ELEM(7,BOOST_PP_SEQ_FIRST_N(15, SEQ_512)) == 8 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_ELEM(14,BOOST_PP_SEQ_FIRST_N(25, SEQ_1024)) == 15 END

#endif

BEGIN BOOST_PP_IS_EMPTY(BOOST_PP_SEQ_ELEM(0, SEQ_NONE)) == 1 END
BEGIN BOOST_PP_SEQ_SIZE(SEQ_NONE) == 1 END
BEGIN BOOST_PP_SEQ_ELEM(2, SEQ) == 5 END
BEGIN BOOST_PP_SEQ_ELEM(20, SEQ_255) == 21 END
BEGIN BOOST_PP_SEQ_ELEM(254, SEQ_255) == 255 END
BEGIN BOOST_PP_SEQ_ELEM(220, SEQ_256) == 221 END
BEGIN BOOST_PP_SEQ_ELEM(255, SEQ_256) == 256 END
BEGIN BOOST_PP_SEQ_SIZE(SEQ) == 4 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_SIZE(SEQ_511) == 511 END
BEGIN BOOST_PP_SEQ_ELEM(476, SEQ_512) == 477 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_SIZE(SEQ_1023) == 1023 END
BEGIN BOOST_PP_SEQ_ELEM(934, SEQ_1024) == 935 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(CAT_S, 13, SEQ_NONE)) == 131 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(ADD_S, 2, SEQ)) == 6374 END

# if BOOST_PP_LIMIT_SEQ == 512

#define STRANS_512(s,data,elem) BOOST_PP_ADD(elem,data)

BEGIN BOOST_PP_SEQ_ELEM(383, BOOST_PP_SEQ_TRANSFORM(STRANS_512,2,SEQ_512)) == 386 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

#define STRANS_1024(s,data,elem) BOOST_PP_ADD(elem,data)

BEGIN BOOST_PP_SEQ_ELEM(728, BOOST_PP_SEQ_TRANSFORM(STRANS_1024,1,SEQ_1024)) == 730 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TAIL(SEQ) SEQ) == 1524152 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_ELEM(459, BOOST_PP_SEQ_TAIL(SEQ_511)) == 461 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_ELEM(624, BOOST_PP_SEQ_TAIL(SEQ_1023)) == 626 END

#endif

# define F1(r, state, x) + x + state
# define FI2(r, state, i, x) BOOST_PP_IIF(BOOST_PP_EQUAL(i,2),+ x + x + state,+ x + state)
BEGIN BOOST_PP_SEQ_FOR_EACH(F1, 1, SEQ) == 16 END
BEGIN BOOST_PP_SEQ_FOR_EACH_I(FI2, 1, SEQ) == 21 END

# if BOOST_PP_LIMIT_SEQ == 512 && BOOST_PP_LIMIT_FOR == 512

# define FE5I2(r, state, i, x) BOOST_PP_EXPR_IIF(BOOST_PP_LESS(i,5),+ x - state)

BEGIN BOOST_PP_SEQ_FOR_EACH_I(FE5I2, 1, SEQ_512) == 10 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024 && BOOST_PP_LIMIT_FOR == 1024

# define FE1024(r, state, i, x) BOOST_PP_EXPR_IIF(BOOST_PP_LESS(i,6),+ x - state)

BEGIN BOOST_PP_SEQ_FOR_EACH_I(FE1024, 2, SEQ_1024) == 9 END

#endif

BEGIN BOOST_PP_TUPLE_ELEM(4, 3, BOOST_PP_SEQ_TO_TUPLE(SEQ)) == 2 END
BEGIN BOOST_PP_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1, 0, BOOST_PP_SEQ_TO_TUPLE(SEQ_NONE))) == 1 END

#if BOOST_PP_VARIADICS

BEGIN BOOST_PP_TUPLE_SIZE(BOOST_PP_SEQ_TO_TUPLE(SEQ_NONE)) == 1 END

#endif

BEGIN BOOST_PP_ARRAY_ELEM(3, BOOST_PP_SEQ_TO_ARRAY(SEQ)) == 2 END

BEGIN BOOST_PP_IS_EMPTY(BOOST_PP_ARRAY_ELEM(0, BOOST_PP_SEQ_TO_ARRAY(SEQ_NONE))) == 1 END
BEGIN BOOST_PP_ARRAY_SIZE(BOOST_PP_SEQ_TO_ARRAY(SEQ_NONE)) == 1 END

# define LESS_S(s, x, y) BOOST_PP_LESS(x, y)
# define FILTER_MOD_S(s, data, elem) BOOST_PP_NOT(BOOST_PP_MOD(elem,data))
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_FILTER(LESS_S, 3, SEQ)) == 45 END

# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MSVC()

BEGIN BOOST_PP_SEQ_ELEM(4,BOOST_PP_SEQ_FILTER(FILTER_MOD_S, 20, SEQ_100)) == 100 END
BEGIN BOOST_PP_SEQ_ELEM(2,BOOST_PP_SEQ_FILTER(FILTER_MOD_S, 30, SEQ_100)) == 90 END

#endif

# if BOOST_PP_LIMIT_SEQ == 512

# define FILTER_EQ_512_S(s, data, elem)          \
    BOOST_PP_BITOR                               \
        (                                        \
        BOOST_PP_EQUAL(BOOST_PP_DEC(data),elem), \
        BOOST_PP_EQUAL(BOOST_PP_INC(data),elem)  \
        )                                        \
/* */

BEGIN BOOST_PP_SEQ_ELEM(1,BOOST_PP_SEQ_FILTER(FILTER_EQ_512_S, 20, SEQ_512)) == 21 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

# define FILTER_EQ_1024_S(s, data, elem)         \
    BOOST_PP_BITOR                               \
        (                                        \
        BOOST_PP_EQUAL(BOOST_PP_DEC(data),elem), \
        BOOST_PP_EQUAL(BOOST_PP_INC(data),elem)  \
        )                                        \
/* */

BEGIN BOOST_PP_SEQ_ELEM(0,BOOST_PP_SEQ_FILTER(FILTER_EQ_1024_S, 100, SEQ_1024)) == 99 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_INSERT(SEQ_NONE, 0, 7)) == 7 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_INSERT(SEQ, 0, 3)) == 34152 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_INSERT(SEQ, 2, 3)) == 41352 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_INSERT(SEQ, 4, 3)) == 41523 END
BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_INSERT(SEQ_255, 0, 100)) == 256 END
BEGIN BOOST_PP_SEQ_ELEM(255,BOOST_PP_SEQ_INSERT(SEQ_255, 0, 100)) == 255 END
BEGIN BOOST_PP_SEQ_ELEM(0,BOOST_PP_SEQ_INSERT(SEQ_255, 0, 113)) == 113 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_ELEM(511,BOOST_PP_SEQ_INSERT(SEQ_511, 0, 0)) == 511 END
BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_INSERT(SEQ_511, 510, 431)) == 512 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_ELEM(1023,BOOST_PP_SEQ_INSERT(SEQ_1023, 0, 0)) == 1023 END
BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_INSERT(SEQ_1023, 742, 29)) == 1024 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_POP_BACK(SEQ)) == 415 END
BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_POP_BACK(SEQ_256)) == 255 END
BEGIN BOOST_PP_SEQ_ELEM(254,BOOST_PP_SEQ_POP_BACK(SEQ_256)) == 255 END
BEGIN BOOST_PP_SEQ_ELEM(100,BOOST_PP_SEQ_POP_BACK(SEQ_256)) == 101 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_POP_BACK(SEQ_512)) == 511 END
BEGIN BOOST_PP_SEQ_ELEM(437,BOOST_PP_SEQ_POP_BACK(SEQ_511)) == 438 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_POP_BACK(SEQ_1024)) == 1023 END
BEGIN BOOST_PP_SEQ_ELEM(632,BOOST_PP_SEQ_POP_BACK(SEQ_1023)) == 633 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_POP_FRONT(SEQ)) == 152 END
BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_POP_FRONT(SEQ_256)) == 255 END
BEGIN BOOST_PP_SEQ_ELEM(0,BOOST_PP_SEQ_POP_FRONT(SEQ_256)) == 2 END
BEGIN BOOST_PP_SEQ_ELEM(254,BOOST_PP_SEQ_POP_FRONT(SEQ_256)) == 256 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_POP_FRONT(SEQ_512)) == 511 END
BEGIN BOOST_PP_SEQ_ELEM(347,BOOST_PP_SEQ_POP_FRONT(SEQ_512)) == 349 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_POP_FRONT(SEQ_1024)) == 1023 END
BEGIN BOOST_PP_SEQ_ELEM(875,BOOST_PP_SEQ_POP_FRONT(SEQ_1024)) == 877 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_PUSH_FRONT(SEQ_NONE, 145))  == 145 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_PUSH_FRONT(SEQ, 3))  == 34152 END
BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_PUSH_FRONT(SEQ_255, 57))  == 256 END
BEGIN BOOST_PP_SEQ_ELEM(0,BOOST_PP_SEQ_PUSH_FRONT(SEQ_255, 222))  == 222 END
BEGIN BOOST_PP_SEQ_ELEM(255,BOOST_PP_SEQ_PUSH_FRONT(SEQ_255, 111))  == 255 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_PUSH_FRONT(SEQ_511, 0))  == 512 END
BEGIN BOOST_PP_SEQ_ELEM(391,BOOST_PP_SEQ_PUSH_FRONT(SEQ_511, 435)) == 391 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_PUSH_FRONT(SEQ_1023, 0))  == 1024 END
BEGIN BOOST_PP_SEQ_ELEM(961,BOOST_PP_SEQ_PUSH_FRONT(SEQ_1023, 435)) == 961 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_PUSH_BACK(SEQ_NONE, 79))  == 79 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_PUSH_BACK(SEQ, 3))  == 41523 END
BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_PUSH_BACK(SEQ_255, 199)) == 256 END
BEGIN BOOST_PP_SEQ_ELEM(254,BOOST_PP_SEQ_PUSH_BACK(SEQ_255, 99)) == 255 END
BEGIN BOOST_PP_SEQ_ELEM(255,BOOST_PP_SEQ_PUSH_BACK(SEQ_255, 99)) == 99 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_PUSH_BACK(SEQ_511, 275)) == 512 END
BEGIN BOOST_PP_SEQ_ELEM(473,BOOST_PP_SEQ_PUSH_BACK(SEQ_511, 78)) == 474 END
BEGIN BOOST_PP_SEQ_ELEM(511,BOOST_PP_SEQ_PUSH_BACK(SEQ_511, 78)) == 78 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_PUSH_BACK(SEQ_1023, 275)) == 1024 END
BEGIN BOOST_PP_SEQ_ELEM(846,BOOST_PP_SEQ_PUSH_BACK(SEQ_1023, 720)) == 847 END
BEGIN BOOST_PP_SEQ_ELEM(1023,BOOST_PP_SEQ_PUSH_BACK(SEQ_1023, 311)) == 311 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REMOVE(SEQ, 0))  == 152 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REMOVE(SEQ, 2))  == 412 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REMOVE(SEQ, 3))  == 415 END

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_REMOVE(SEQ_255, 254))  == 254 END
BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_REMOVE(SEQ_256, 255))  == 255 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_REMOVE(SEQ_511, 429))  == 510 END
BEGIN BOOST_PP_SEQ_ELEM(462,BOOST_PP_SEQ_REMOVE(SEQ_512, 374))  == 464 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_REMOVE(SEQ_1023, 989))  == 1022 END
BEGIN BOOST_PP_SEQ_ELEM(731,BOOST_PP_SEQ_REMOVE(SEQ_1024, 555)) == 733 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REPLACE(SEQ_NONE, 0, 22))  == 22 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REPLACE(SEQ, 0, 3))  == 3152 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REPLACE(SEQ, 1, 3))  == 4352 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_REPLACE(SEQ, 3, 3))  == 4153 END
BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_REPLACE(SEQ_256, 255, 22)) == 256 END
BEGIN BOOST_PP_SEQ_ELEM(233,BOOST_PP_SEQ_REPLACE(SEQ_256, 255, 22)) == 234 END
BEGIN BOOST_PP_SEQ_ELEM(255,BOOST_PP_SEQ_REPLACE(SEQ_256, 255, 22)) == 22 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_REPLACE(SEQ_511, 509, 350)) == 511 END
BEGIN BOOST_PP_SEQ_ELEM(482,BOOST_PP_SEQ_REPLACE(SEQ_512, 436, 33)) == 483 END
BEGIN BOOST_PP_SEQ_ELEM(436,BOOST_PP_SEQ_REPLACE(SEQ_512, 436, 33)) == 33 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_REPLACE(SEQ_1023, 846, 25)) == 1023 END
BEGIN BOOST_PP_SEQ_ELEM(984,BOOST_PP_SEQ_REPLACE(SEQ_1024, 841, 670)) == 985 END
BEGIN BOOST_PP_SEQ_ELEM(841,BOOST_PP_SEQ_REPLACE(SEQ_1024, 841, 670)) == 670 END

#endif

BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_SUBSEQ(SEQ, 0, 4))  == 4152 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_SUBSEQ(SEQ, 0, 2))  == 41 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_SUBSEQ(SEQ, 1, 2))  == 15 END
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_SUBSEQ(SEQ, 2, 2))  == 52 END

# if BOOST_PP_LIMIT_SEQ == 512

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_SUBSEQ(SEQ_511, 372, 5))  == 5 END
BEGIN BOOST_PP_SEQ_ELEM(14,BOOST_PP_SEQ_SUBSEQ(SEQ_512, 293, 17))  == 308 END

#endif

# if BOOST_PP_LIMIT_SEQ == 1024

BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_SUBSEQ(SEQ_1023, 846, 5))  == 5 END
BEGIN BOOST_PP_SEQ_ELEM(16,BOOST_PP_SEQ_SUBSEQ(SEQ_1024, 843, 19))  == 860 END

#endif

# define F2(r, x) + BOOST_PP_SEQ_ELEM(0, x) + 2 - BOOST_PP_SEQ_ELEM(1, x)

#define ADD_NIL(x) x(nil)

BEGIN BOOST_PP_SEQ_FOR_EACH_PRODUCT(F2, ((1)(0)) ((2)(3))) == 0 END

# define L1 (0)(x)
# define L2 (a)(1)(b)(2)
# define L3 (c)(3)(d)

# define LL (L1)(L2)(L3)

#define SEQ_APPEND(s, state, elem) state elem
BEGIN BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TAIL(BOOST_PP_SEQ_FOLD_LEFT(SEQ_APPEND, (~), LL))) == 0x0a1b2c3d END
BEGIN BOOST_PP_SEQ_SIZE(BOOST_PP_SEQ_TAIL(BOOST_PP_SEQ_FOLD_LEFT(SEQ_APPEND, (~), LL))) == 9 END

BEGIN BOOST_PP_LIST_AT(BOOST_PP_SEQ_TO_LIST(SEQ), 2) == 5 END
BEGIN BOOST_PP_IS_EMPTY(BOOST_PP_LIST_AT(BOOST_PP_SEQ_TO_LIST(SEQ_NONE),0)) == 1 END
BEGIN BOOST_PP_LIST_SIZE(BOOST_PP_SEQ_TO_LIST(SEQ_NONE)) == 1 END

#if BOOST_PP_VARIADICS

BEGIN BOOST_PP_VARIADIC_SIZE(BOOST_PP_SEQ_ENUM(SEQ_NONE)) == 1 END
BEGIN BOOST_PP_VARIADIC_ELEM(0,BOOST_PP_SEQ_ENUM(SEQ)) == 4 END
BEGIN BOOST_PP_TUPLE_ELEM(2,BOOST_PP_SEQ_ELEM(0,BOOST_PP_VARIADIC_SEQ_TO_SEQ(SEQVAR))) == 8 END

#endif
